/*
**==============================================================================
**
** Open Management Infrastructure (OMI)
**
** Copyright (c) Microsoft Corporation
** 
** Licensed under the Apache License, Version 2.0 (the "License"); you may not 
** use this file except in compliance with the License. You may obtain a copy 
** of the License at 
**
**     http://www.apache.org/licenses/LICENSE-2.0 
**
** THIS CODE IS PROVIDED *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
** KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION ANY IMPLIED 
** WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A PARTICULAR PURPOSE, 
** MERCHANTABLITY OR NON-INFRINGEMENT. 
**
** See the Apache 2 License for the specific language governing permissions 
** and limitations under the License.
**
**==============================================================================
*/

#include <assert.h>
#include <ctype.h>
#include "httpcommon.h"
#include "httpclient.h"
#include <sock/addr.h>
#include <sock/sock.h>
#include <sock/selector.h>
#include <pal/sleep.h>
#include <base/buf.h>
#include <base/log.h>
#include <base/result.h>
#include <pal/strings.h>
#include <pal/format.h>
#include <pal/sleep.h>
#include <base/paths.h>

#ifdef CONFIG_POSIX
#include <openssl/ssl.h>
#include <openssl/err.h>
#else
/* ssl not supported in this configuration; just make compiler happy */
typedef void SSL;
typedef void SSL_CTX;
#define SSL_CTX_free(c)
#define SSL_new(c) 0
#define SSL_free(c)
#define SSL_set_connect_state(c)
#define SSL_set_fd(c,a) (a==a)
#define SSL_read(c,a,b) 0
#define SSL_write(c,a,b) 0
#define SSL_get_error(c,e) e
#define SSL_ERROR_WANT_WRITE 0
#define SSL_ERROR_WANT_READ 1
#define SSL_ERROR_SYSCALL 2

#ifdef EWOULDBLOCK
# undef EWOULDBLOCK
#endif

#define EWOULDBLOCK 0

#ifdef EINPROGRESS
# undef EINPROGRESS
#endif

#define EINPROGRESS 0

#define ERR_get_error() 0
#define ERR_error_string_n(c,a,b) a[0]=0
#define SSL_accept(c) 0
#define SSL_connect(c) 0

#endif

/*
**==============================================================================
**
** Local definitions:
**
**==============================================================================
*/

static const MI_Uint32 _MAGIC = 0x5FC7B966;
static const MI_Uint32 MAX_HEADER_SIZE = 2 * 1024;
static const MI_Uint32 INITIAL_BUFFER_SIZE = 2 * 1024;
static const MI_Uint32 DEFAULT_HTTP_TIMEOUT_USEC = 60 * 1000000;

typedef enum _Http_RecvState
{
    RECV_STATE_HEADER,
    RECV_STATE_CONTENT,
    RECV_STATE_CHUNKHEADER,
    RECV_STATE_CHUNKDATA
}
Http_RecvState;

typedef struct _HttpClient_SR_SocketData
{
    /* based member*/
    Handler     base;

    /* timeout */
    MI_Uint64   timeoutUsec;

    /* ssl part */
    SSL*  ssl;
    MI_Boolean  reverseOperations;  /*reverse read/write Events/Handlers*/
    MI_Boolean  connectDone;

    /* receiving data */
    __field_ecount(recvBufferSize) char* recvBuffer;
    size_t      recvBufferSize;
    size_t      recvievedSize;
    Http_RecvState      recvingState;
    HttpClientHeaderField recvHeaderFields[64];
    HttpClientResponseHeader   recvHeaders;
    MI_Sint64   contentLength;
    MI_Sint64   contentBegin;
    MI_Sint64   contentEnd;
    MI_Sint64   contentTotalLength;
    Page*   recvPage;

    /* flag for a response from a HEAD request */
    MI_Boolean  headVerb;

    /* sending part */
    Page*   sendPage;
    Page*   sendHeader;
    size_t      sentSize;
    Http_RecvState  sendingState;

    /* general operation status */
    MI_Result status;

}
HttpClient_SR_SocketData;

struct _HttpClient
{
    MI_Uint32       magic;
    Selector        internalSelector;
    Selector*       selector;
    HttpClientCallbackOnStatus     callbackOnStatus;
    HttpClientCallbackOnResponse   callbackOnResponse;
    void*                               callbackData;
    SSL_CTX*    sslContext;

    HttpClient_SR_SocketData* connector;

    MI_Boolean  internalSelectorUsed;
};


/* helper functions result */
typedef enum _Http_CallbackResult
{
    PRT_RETURN_FALSE,
    PRT_RETURN_TRUE,
    PRT_CONTINUE
}
Http_CallbackResult;


MI_INLINE MI_Uint8 _ToLower(MI_Uint8 x)
{
    return (MI_Uint8)tolower(x);
}

#define _HashCode(first,last,len) ( (((MI_Uint8)first) << 16) | (((MI_Uint8)last) << 8)  | (((MI_Uint16)len)) )

_Return_type_success_(return == MI_TRUE)
static MI_Boolean _getNameValuePair(
    _Inout_ CharPtr* line,
    _Out_ CharPtr* value,
    _Out_ int*  nameHashCode)
{
    int len = 0;
    char* p;

    /* find name end /hash-code */

    if ((*line)[0] == 0)
        return MI_FALSE;

    *nameHashCode =  _ToLower((MI_Uint8)(*line)[0])<<16;

    for (len = 1; (*line)[len] && (*line)[len] != ':' && (*line)[len] != '\r'; len++)
        ;

    if ((*line)[len] != ':')
        return MI_FALSE;

    *nameHashCode |=  (len) | _ToLower((MI_Uint8)(*line)[len-1])<<8;
    (*line)[len] = 0;
    p = *line + len + 1;

    /* skip spaces in value */
    while (p[0] == ' ' || p[0] == '\t')
        p++;

    *value = p;

    /* skip to end of line */
    for ( ; p[0]; )
    {
        if (p[0] && p[1] && p[2] &&
            p[0] == '\r' && p[1] == '\n' &&
            p[2] != ' '  && p[2] != '\t')
        {
            p[0] = 0;
            (*line) = p + 2;
            break;
        }
        p++;
    }

    /* remove trailing spaces */
    p--;
#ifdef _PREFAST_
#pragma prefast (push)
#pragma prefast (disable: 26001)
#endif
    /* disabling IPv6 OACR warnings - D3M bug 56 */
    while (p[0] == ' ' || p[0] == '\t')
        p--;
#ifdef _PREFAST_
#pragma prefast (pop)
#endif

    p[1] = 0;

    return MI_TRUE;
}

static MI_Boolean _getHeaderField(
    HttpClient_SR_SocketData* handler,
    _Inout_ CharPtr* line)
{
    /* expecting  Request-Line = Method SP Request-URI SP HTTP-Version CRLF
        Read more: http://www.faqs.org/rfcs/rfc2616.html#ixzz0jKdjJdZv
    */
    char* name = *line;
    char* value = NULL;
    int nameHashCode;

    if (!_getNameValuePair(line, &value, &nameHashCode))
        return MI_FALSE;

    if (nameHashCode == _HashCode('c', 'h', 14) && /*Content-Length*/
        Strcasecmp(name,"Content-Length") == 0)
    {
        handler->contentLength = Strtoull(value, NULL, 10);
        /*if (handler->contentLength > HTTP_MAX_CONTENT)
        handler->contentBegin = -1;
        handler->contentEnd = -1;
        handler->contentTotalLength = -1;
        return MI_FALSE;*/
    }
    else if (nameHashCode == _HashCode('t', 'g', 17) && /*Transfer-Encoding*/
        Strcasecmp(name,"Transfer-Encoding") == 0)
    {
        handler->contentLength = -1;
        handler->contentBegin = -1;
        handler->contentEnd = -1;
        handler->contentTotalLength = -1;
    }
    else if (nameHashCode == _HashCode('c','e',13) && /*Content-Range*/
        Strcasecmp(name, "Content-Range") == 0)
    {
        char* delimptr;
        char* endptr;
        handler->contentEnd = -1;
        handler->contentBegin = (MI_Sint64)Strtoull(value, NULL, 10);
        delimptr = strchr(value, '-');
        endptr = strchr(value, '\n');
        if (delimptr != NULL && (endptr == NULL || endptr > delimptr))
            handler->contentEnd = Strtoull(++delimptr, NULL, 10);
        delimptr = strchr(value, '/');
        if (delimptr != NULL && (endptr == NULL || endptr > delimptr))
            handler->contentTotalLength = Strtoull(++delimptr, NULL, 10);
    }
    if (handler->recvHeaders.sizeHeaders < MI_COUNT(handler->recvHeaderFields))
    {
        handler->recvHeaderFields[handler->recvHeaders.sizeHeaders].name = name;
        handler->recvHeaderFields[handler->recvHeaders.sizeHeaders].value = value;
        handler->recvHeaders.sizeHeaders++;
    }
    else
    {
        trace_TooManyHttpHeaders(scs(name), scs(value));
    }

    return MI_TRUE;
}

static MI_Boolean _getChunkSize(
    const char * line,
    MI_Uint32* chunkSize)
{
    *chunkSize = 0;

    while (*line)
    {
        char c = *line;

        if (c >= '0' && c <= '9')
            *chunkSize = *chunkSize * 16 + (c - '0');
        else if (c >= 'a' && c <= 'f')
            *chunkSize = *chunkSize * 16 + (c - 'a' + 10);
        else if (c >= 'A' && c <= 'F')
            *chunkSize = *chunkSize * 16 + (c - 'A' + 10);
        else
            break;

        line++;
    }

    return MI_TRUE;
}


static MI_Boolean _getRequestLine(
    HttpClient_SR_SocketData* handler,
    _Inout_ CharPtr* line)
{
    size_t index;
    /* expecting  Request-Line = Method SP Request-URI SP HTTP-Version CRLF
        Read more: http://www.faqs.org/rfcs/rfc2616.html#ixzz0jKdjJdZv
    */

    /* initialize header */
    handler->recvHeaders.sizeHeaders = 0;
    handler->recvHeaders.headers = handler->recvHeaderFields;

    /* find http code */
    {
        /* skip http version, that is in format
                HTTP-Version   = "HTTP" "/" 1*DIGIT "." 1*DIGIT
                http://www.w3.org/Protocols/rfc2616/rfc2616-sec3.html#sec3.1

                Status-Line = HTTP-Version SP Status-Code SP Reason-Phrase CRLF
        */
        const char* s = *line; /*+ HTTP/1.1<sp>*/
        size_t skips = 9;
        for (; skips > 0; s++)
        {
            skips--;
            if (!*s)
            {
                return MI_FALSE;
            }
        }

        handler->recvHeaders.httpError = Strtoul(s, NULL, 10);
    }

    /* skip to end of line */
    for (index = 1; (*line)[index] && index < handler->recvievedSize; index++)
    {
        if ((*line)[index-1] == '\r' && (*line)[index] == '\n')
        {
            (*line) = (*line) + index + 1;
            return MI_TRUE;
        }
    }

    return MI_FALSE;
}

static MI_Result _Sock_Read(
    HttpClient_SR_SocketData* handler,
    void* buf,
    size_t buf_size,
    size_t* sizeRead)
{
    int res;


    if (!handler->ssl)
        return Sock_Read(handler->base.sock, buf, buf_size, sizeRead);

    handler->base.mask &= ~SELECTOR_WRITE;
    handler->base.mask |= SELECTOR_READ;
    handler->reverseOperations = MI_FALSE;

    *sizeRead = 0;

    res = SSL_read(handler->ssl, buf, buf_size);
    if (res == 0)
        return MI_RESULT_OK;    /* connection closed */
    if (res > 0)
    {
        *sizeRead = res;
        return MI_RESULT_OK;    /* ok */
    }

    switch (SSL_get_error(handler->ssl, res))
    {
    case SSL_ERROR_WANT_WRITE:
        handler->reverseOperations = MI_TRUE;   /* wait until write is allowed */
        handler->base.mask &= ~SELECTOR_READ;
        handler->base.mask |= SELECTOR_WRITE;
        return MI_RESULT_WOULD_BLOCK;

    case SSL_ERROR_WANT_READ:
        return MI_RESULT_WOULD_BLOCK;

    case SSL_ERROR_SYSCALL:
        if (EAGAIN == errno ||
            EWOULDBLOCK == errno ||
            EINPROGRESS == errno)
            return MI_RESULT_WOULD_BLOCK;

        trace_SSLRead_UnexpectedSysError(errno);
        break;

    default:
        {
            /* print error */
            unsigned long err = ERR_get_error();
            while (err)
            {
                char err_txt[200];
                ERR_error_string_n(err, err_txt, sizeof(err_txt));

                trace_SSLRead_Error((int)err, scs(err_txt));
                err = ERR_get_error();
            }
        }
        break;
    }
    return MI_RESULT_FAILED;
}

static MI_Result _Sock_Write(
    HttpClient_SR_SocketData* handler,
    void* buf,
    size_t buf_size,
    size_t* sizeWritten)
{
    int res;

    if (!handler->ssl)
        return Sock_Write(handler->base.sock, buf, buf_size, sizeWritten);

    /* Do not clear READ flag, since 'close' notification
       delivered as READ event */
    handler->base.mask &= ~SELECTOR_READ;
    handler->base.mask |= SELECTOR_WRITE;
    handler->reverseOperations = MI_FALSE;

    *sizeWritten = 0;

    if (handler->connectDone)
        res = SSL_write(handler->ssl, buf, buf_size);
    else
    {
        res = SSL_connect(handler->ssl);
        if (res > 0)
        {
            /* we are done with accpet */
            handler->connectDone = MI_TRUE;
            return _Sock_Write(handler,buf,buf_size,sizeWritten);
        }
        /* perform regular error checking */
    }


    if (res == 0)
        return MI_RESULT_OK;    /* connection closed */

    if (res > 0)
    {
        *sizeWritten = res;
        return MI_RESULT_OK;    /* ok */
    }

    switch (SSL_get_error(handler->ssl, res))
    {
    case SSL_ERROR_WANT_WRITE:
        return MI_RESULT_WOULD_BLOCK;

    case SSL_ERROR_WANT_READ:
        handler->reverseOperations = MI_TRUE;   /* wait until write is allowed */
        handler->base.mask |= SELECTOR_READ;
        handler->base.mask &= ~SELECTOR_WRITE;
        return MI_RESULT_WOULD_BLOCK;

    case SSL_ERROR_SYSCALL:
        if (EAGAIN == errno ||
            EWOULDBLOCK == errno ||
            EINPROGRESS == errno)
            return MI_RESULT_WOULD_BLOCK;

        trace_SSLWrite_UnexpectedSysError(errno);
        break;

    default:
        break;
    }
    return MI_RESULT_FAILED;
}

static Http_CallbackResult _ReadHeader(
    HttpClient_SR_SocketData* handler)
{
    char* buf;
    char* currentLine;
    char* data;
    size_t contentSize;
    size_t buf_size, received, index;
    MI_Result r;
    MI_Boolean fullHeaderReceived = MI_FALSE;

    /* are we done with header? */
    if (handler->recvingState != RECV_STATE_HEADER)
        return PRT_CONTINUE;

    buf = handler->recvBuffer + handler->recvievedSize;
    buf_size = handler->recvBufferSize - handler->recvievedSize;
    received = 0;

    r = _Sock_Read(handler, buf, buf_size, &received);

    if (r == MI_RESULT_OK && 0 == received)
        return PRT_RETURN_FALSE; /* connection closed */

    if (r != MI_RESULT_OK && r != MI_RESULT_WOULD_BLOCK)
        return PRT_RETURN_FALSE;

    if (!received)
        return PRT_RETURN_TRUE;

    handler->recvievedSize += received;

    /* check header */

    /* did we get full header? */
    buf = handler->recvBuffer;
    for (index = 3; index < handler->recvievedSize; index++)
    {
        _Analysis_assume_(handler->recvBufferSize > 3);
        if (buf[index-3] == '\r' && buf[index-1] == '\r' &&
            buf[index-2] == '\n' && buf[index] == '\n' )
        {
            fullHeaderReceived = MI_TRUE;
            break;
        }
    }

    if (!fullHeaderReceived)
    {
        if (handler->recvievedSize <  handler->recvBufferSize)
            return PRT_RETURN_TRUE; /* continue reading */

        if (handler->recvBufferSize < MAX_HEADER_SIZE)
        {
            buf = PAL_Realloc(handler->recvBuffer, handler->recvBufferSize * 2);

            if (!buf)
                return PRT_RETURN_FALSE;

            handler->recvBufferSize *= 2;
            handler->recvBuffer = buf;
            return _ReadHeader(handler);
        }
        else
        {
            /* Http header is too big - drop connection */
            trace_HttpHeaderIsTooBig();
            return PRT_RETURN_FALSE;
        }
    }

    /* consume data */
    currentLine = buf;
    data = buf + index + 1; /* pointer to data in case we got some */

    if (!_getRequestLine(handler, &currentLine))
        return PRT_RETURN_FALSE;

    while ((data - currentLine) > 3)
    {
        if (!_getHeaderField(handler, &currentLine))
            return PRT_RETURN_FALSE;
    }

    /* Check if we have to deal with chunked-encoded data */
    if (handler->contentLength < 0)
    {
        handler->recvievedSize -= index + 1;

        /* Invoke user's callback with header information */
        {
            HttpClient* self = (HttpClient*)handler->base.data;

            if (!(*self->callbackOnResponse)(self, self->callbackData, &handler->recvHeaders,
                handler->contentLength, handler->contentLength == 0, 0))
                return PRT_RETURN_FALSE;
        }

        /* remove consumed header part */
        memmove(handler->recvBuffer, data, handler->recvievedSize);

        handler->recvingState = RECV_STATE_CHUNKHEADER;
        return PRT_CONTINUE;
    }

    contentSize = (size_t)handler->contentLength;
    if (handler->headVerb)
        contentSize = 0;

    /* Allocate zero-terminated buffer */
    handler->recvPage = (Page*)PAL_Malloc(sizeof (Page) + (size_t)contentSize + 1);

    if (!handler->recvPage)
        return PRT_RETURN_FALSE;
    ((char*)(handler->recvPage + 1))[contentSize] = '\0';

    handler->recvPage->u.s.size = (unsigned int)contentSize;
    handler->recvPage->u.s.next = 0;
    handler->recvievedSize -= index + 1;

    /* Verify that we have not more than 'content-length' bytes in buffer left
        If we have more, assuming http client is invalid and drop connection */
    if (handler->recvievedSize > contentSize)
    {
        trace_HttpPayloadIsBiggerThanContentLength();
        return PRT_RETURN_FALSE;
    }

    if (handler->recvievedSize != 0)
        memcpy(handler->recvPage + 1, data, handler->recvievedSize);
    handler->recvingState = RECV_STATE_CONTENT;

    /* Invoke user's callback with header information */
    {
        HttpClient* self = (HttpClient*)handler->base.data;

        if (!(*self->callbackOnResponse)(self, self->callbackData, &handler->recvHeaders,
                                         handler->contentLength, handler->contentLength == 0, 0))
            return PRT_RETURN_FALSE;
    }

    return PRT_CONTINUE;
}

static Http_CallbackResult _ReadData(
    HttpClient_SR_SocketData* handler)
{
    /* HttpClient* self = (HttpClient*)handler->base.data; */
    char* buf;
    size_t buf_size, received;
    MI_Result r;

    /* are we in the right state? */
    if (handler->recvingState != RECV_STATE_CONTENT)
        return PRT_RETURN_FALSE;

    if (!handler->headVerb)
    {
        buf = (char*)(handler->recvPage + 1) + handler->recvievedSize;
        buf_size = (size_t)(handler->contentLength - handler->recvievedSize);
        received = 0;

        if (buf_size != 0)
        {
            r = _Sock_Read(handler, buf, buf_size, &received);

            if (r == MI_RESULT_OK && 0 == received)
                return PRT_RETURN_FALSE; /* connection closed */

            if (r != MI_RESULT_OK && r != MI_RESULT_WOULD_BLOCK)
                return PRT_RETURN_FALSE;

            handler->recvievedSize += received;

            if (handler->contentLength > 0 && handler->recvievedSize < (size_t)handler->contentLength)
            {                           /* assume 500 bytes per millisecond transmission */
                                        /* wait to avoid spinning on _Sock_Read */
                unsigned int bytesLeft = (unsigned int)handler->contentLength - (unsigned int)handler->recvievedSize;
                unsigned long msec = (unsigned long)(bytesLeft / 500 + 1);

                Sleep_Milliseconds(msec);
            }
        }

        /* did we get all data? */
        if (handler->recvievedSize != (size_t)handler->contentLength)
            return PRT_RETURN_TRUE;
    }

    /* Invoke user's callback with header information */
    {
        HttpClient* self = (HttpClient*)handler->base.data;
        MI_Boolean lastChunk = MI_TRUE;

        if (handler->contentEnd >= 0 &&
            handler->contentEnd + 1 < handler->contentTotalLength)
            lastChunk = MI_FALSE;

        if (!(*self->callbackOnResponse)(self, self->callbackData, 0,
            handler->contentLength, lastChunk, &handler->recvPage))
            return PRT_RETURN_FALSE;

        /* status callback */
        handler->status = MI_RESULT_OK;
        (*self->callbackOnStatus)(
            self,
            self->callbackData,
            MI_RESULT_OK);
    }

    if (handler->recvPage)
        PAL_Free(handler->recvPage);

    handler->recvPage = NULL;
    handler->recvievedSize = 0;
    memset(&handler->recvHeaders, 0, sizeof handler->recvHeaders);
    handler->recvingState = RECV_STATE_HEADER;
    return PRT_CONTINUE;
}

static Http_CallbackResult _ReadChunkHeader(
    HttpClient_SR_SocketData* handler)
{
    char* buf;
    char* currentLine;
    char* data;
    size_t buf_size, received, index;
    MI_Result r;
    MI_Boolean fullHeaderReceived = MI_FALSE;
    MI_Uint32   chunkSize = 0;
    MI_Boolean connectionClosed = MI_FALSE;

    /* are we done with header? */
    if (handler->recvingState != RECV_STATE_CHUNKHEADER)
        return PRT_CONTINUE;

    buf = handler->recvBuffer + handler->recvievedSize;
    buf_size = handler->recvBufferSize - handler->recvievedSize;
    received = 0;

    r = _Sock_Read(handler, buf, buf_size, &received);

    if (r == MI_RESULT_OK && 0 == received)
    {
        if (!handler->recvBufferSize)
            return PRT_RETURN_FALSE; /* connection closed */

        connectionClosed = MI_TRUE;
    }

    if (r != MI_RESULT_OK && r != MI_RESULT_WOULD_BLOCK)
        return PRT_RETURN_FALSE;

    if (!received && !handler->recvBufferSize)
        return PRT_RETURN_TRUE;

    handler->recvievedSize += received;

    /* did we get full header? */
    buf = handler->recvBuffer;

    _Analysis_assume_(handler->recvBufferSize > 2);
    for (index = 1; index < handler->recvievedSize && buf[index]; index++)
    {
        if (buf[index-1] == '\r' && buf[index] == '\n' )
        {
            fullHeaderReceived = MI_TRUE;
            break;
        }
    }

    if (!fullHeaderReceived)
    {
        if (connectionClosed)
            return PRT_RETURN_FALSE; /* connection closed */

        if (handler->recvievedSize <  handler->recvBufferSize)
            return PRT_RETURN_TRUE; /* continue reading */

        if (handler->recvBufferSize < MAX_HEADER_SIZE)
        {
            buf = PAL_Realloc(handler->recvBuffer, handler->recvBufferSize * 2);

            if (!buf)
                return PRT_RETURN_FALSE;

            handler->recvBufferSize *= 2;
            handler->recvBuffer = buf;
            return _ReadChunkHeader(handler);
        }
        else
        {
            /* http chunk header is too big - drop connection */
            trace_HttpChunkHeaderIsTooBig();
            return PRT_RETURN_FALSE;
        }
    }

    /* consume data */
    currentLine = buf;
    data = buf + index + 1; /* pointer to data in case we got some */

    if (!_getChunkSize(currentLine, &chunkSize))
        return PRT_RETURN_FALSE;

    if (0 == chunkSize)
    {
        /* last chunk received */

        /* Invoke user's callback with header information */
        {
            HttpClient* self = (HttpClient*)handler->base.data;

            if (!(*self->callbackOnResponse)( self, self->callbackData, 0,
                handler->contentLength, MI_TRUE, 0))
                return PRT_RETURN_FALSE;

            /* status callback */
            handler->status = MI_RESULT_OK;
            (*self->callbackOnStatus)(
                self,
                self->callbackData,
                MI_RESULT_OK);
        }

        /* clean up state */
        handler->recvPage = NULL;
        handler->recvievedSize = 0;
        memset(&handler->recvHeaders, 0, sizeof(handler->recvHeaders));
        handler->recvingState = RECV_STATE_HEADER;

        if (connectionClosed)
            return PRT_RETURN_FALSE; /* connection closed */

        return PRT_CONTINUE;
    }

    /* Allocate zero-terminated buffer */
    handler->recvPage = (Page*)PAL_Malloc(sizeof (Page) + (size_t)chunkSize + 2 /*CR-LF*/ + 1 /* \0 */);

    if (!handler->recvPage)
        return PRT_RETURN_FALSE;

    ((char*)(handler->recvPage + 1))[chunkSize+2] = 0;

    handler->recvPage->u.s.size = (unsigned int)chunkSize;
    handler->recvPage->u.s.next = 0;

    /* subtract header size */
    handler->recvievedSize -= index + 1;

    /* in case of small chunks we may receive more than one chunk already */
    if (handler->recvievedSize > (size_t)(chunkSize+2))
    {
        /* copy page size to page */
        memcpy(handler->recvPage + 1, data, chunkSize+2);

        /* notify user */
        {
            HttpClient* self = (HttpClient*)handler->base.data;

            if (!(*self->callbackOnResponse)( self, self->callbackData, 0,
                handler->contentLength, MI_FALSE, &handler->recvPage))
                return PRT_RETURN_FALSE;

            if (handler->recvPage)
                PAL_Free(handler->recvPage);

            handler->recvPage = 0;
        }

        /* remove consumed part */
        memmove(handler->recvBuffer, data + chunkSize+2, handler->recvievedSize - (chunkSize+2));
        handler->recvievedSize -= (chunkSize+2);

        /* consume next chunk */
        return _ReadChunkHeader(handler);
    }

    memcpy(handler->recvPage + 1, data, handler->recvievedSize);
    handler->recvingState = RECV_STATE_CHUNKDATA;

    if (connectionClosed)
        return PRT_RETURN_FALSE; /* connection closed */

    return PRT_CONTINUE;
}
static Http_CallbackResult _ReadChunkData(
    HttpClient_SR_SocketData* handler)
{
    //HttpClient* self = (HttpClient*)handler->base.data;
    char* buf;
    size_t buf_size, received;
    MI_Result r;

    /* are we in the right state? */
    if (handler->recvingState != RECV_STATE_CHUNKDATA)
        return PRT_RETURN_FALSE;

    buf = ((char*)(handler->recvPage + 1)) + handler->recvievedSize;
    buf_size = (size_t)(handler->recvPage->u.s.size + 2 /* CR-LF */ - handler->recvievedSize);
    received = 0;

    if (buf_size)
    {
        r = _Sock_Read(handler, buf, buf_size, &received);

        if (r == MI_RESULT_OK && 0 == received)
            return PRT_RETURN_FALSE; /* connection closed */

        if (r != MI_RESULT_OK && r != MI_RESULT_WOULD_BLOCK)
            return PRT_RETURN_FALSE;

        handler->recvievedSize += received;
    }

    if (handler->recvievedSize != (size_t)(handler->recvPage->u.s.size + 2 /* CR-LF */))
        return PRT_RETURN_TRUE;

    /* Invoke user's callback with header information */
    {
        HttpClient* self = (HttpClient*)handler->base.data;

        if (!(*self->callbackOnResponse)(self, self->callbackData, 0,
                                         handler->contentLength, MI_FALSE, &handler->recvPage))
            return PRT_RETURN_FALSE;
    }

    if (handler->recvPage)
        PAL_Free(handler->recvPage);

    handler->recvPage = 0;
    handler->recvievedSize = 0;
    memset(&handler->recvHeaders, 0, sizeof(handler->recvHeaders));
    handler->recvingState = RECV_STATE_CHUNKHEADER;
    return PRT_CONTINUE;
}

static Http_CallbackResult _WriteHeader(
    HttpClient_SR_SocketData* handler)
{
    char* buf;
    size_t buf_size, sent;
    MI_Result r;

    /* Do we have any data to send? */
    if (!handler->sendHeader)
        return PRT_RETURN_TRUE;

    /* are we done with header? */
    if (handler->sendingState == RECV_STATE_CONTENT)
        return PRT_CONTINUE;


    buf = ((char*)(handler->sendHeader + 1)) + handler->sentSize;
    buf_size = handler->sendHeader->u.s.size - handler->sentSize;
    sent = 0;

    r = _Sock_Write(handler, buf, buf_size, &sent);

    if (r == MI_RESULT_OK && 0 == sent)
        return PRT_RETURN_FALSE; /* connection closed */

    if (r != MI_RESULT_OK && r != MI_RESULT_WOULD_BLOCK)
        return PRT_RETURN_FALSE;

    handler->sentSize += sent;
    handler->headVerb = buf_size > 4 && Strncasecmp(buf, "HEAD", 4) == 0;

    /* did we send all data? */
    if (handler->sentSize != handler->sendHeader->u.s.size)
        return PRT_RETURN_TRUE;

    PAL_Free(handler->sendHeader);
    handler->sendHeader = 0;
    handler->sentSize = 0;
    handler->sendingState = RECV_STATE_CONTENT;

    return PRT_CONTINUE;
}

static Http_CallbackResult _WriteData(
    HttpClient_SR_SocketData* handler)
{
    char* buf;
    size_t buf_size, sent;
    MI_Result r;

    /* are we in the right state? */
    if (handler->sendingState != RECV_STATE_CONTENT)
        return PRT_RETURN_FALSE;

    if (!handler->sendPage)
    {   /* no content*/
        handler->sentSize = 0;
        handler->sendingState = RECV_STATE_HEADER;
        handler->base.mask &= ~SELECTOR_WRITE;
        handler->base.mask |= SELECTOR_READ;

        return PRT_CONTINUE;
    }

    buf = ((char*)(handler->sendPage + 1)) + handler->sentSize;
    buf_size = handler->sendPage->u.s.size - handler->sentSize;
    sent = 0;

    r = _Sock_Write(handler, buf, buf_size, &sent);

    if (r == MI_RESULT_OK && 0 == sent)
        return PRT_RETURN_FALSE; /* connection closed */

    if (r != MI_RESULT_OK && r != MI_RESULT_WOULD_BLOCK)
        return PRT_RETURN_FALSE;

    handler->sentSize += sent;

    /* did we send all the data? */
    if (handler->sentSize != handler->sendPage->u.s.size)
        return PRT_RETURN_TRUE;

    PAL_Free(handler->sendPage);
    handler->sendPage = NULL;
    handler->sentSize = 0;
    handler->sendingState = RECV_STATE_HEADER;
    handler->base.mask &= ~SELECTOR_WRITE;
    handler->base.mask |= SELECTOR_READ;

    return PRT_CONTINUE;
}

static MI_Boolean _RequestCallbackRead(
    HttpClient_SR_SocketData* handler)
{
    switch (_ReadHeader(handler))
    {
    case PRT_CONTINUE: break;
    case PRT_RETURN_TRUE: return MI_TRUE;
    case PRT_RETURN_FALSE: return MI_FALSE;
    }

    if (handler->recvingState == RECV_STATE_CONTENT)
    {
        switch (_ReadData(handler))
        {
        case PRT_CONTINUE: break;
        case PRT_RETURN_TRUE: return MI_TRUE;
        case PRT_RETURN_FALSE: return MI_FALSE;
        }
    }

    if (handler->recvingState == RECV_STATE_CHUNKHEADER)
    {
        switch (_ReadChunkHeader(handler))
        {
        case PRT_CONTINUE: break;
        case PRT_RETURN_TRUE: return MI_TRUE;
        case PRT_RETURN_FALSE: return MI_FALSE;
        }
    }
    if (handler->recvingState == RECV_STATE_CHUNKDATA)
    {
        switch (_ReadChunkData(handler))
        {
        case PRT_CONTINUE: break;
        case PRT_RETURN_TRUE: return MI_TRUE;
        case PRT_RETURN_FALSE: return MI_FALSE;
        }
    }

    return MI_TRUE;
}

static MI_Boolean _RequestCallbackWrite(
    HttpClient_SR_SocketData* handler)
{
    switch (_WriteHeader(handler))
    {
    case PRT_CONTINUE: break;
    case PRT_RETURN_TRUE: return MI_TRUE;
    case PRT_RETURN_FALSE: return MI_FALSE;
    }

    switch (_WriteData(handler))
    {
    case PRT_CONTINUE: break;
    case PRT_RETURN_TRUE: return MI_TRUE;
    case PRT_RETURN_FALSE: return MI_FALSE;
    }
    return MI_TRUE;
}


static MI_Boolean _RequestCallback(
    Selector* sel,
    Handler* handlerIn,
    MI_Uint32 mask,
    MI_Uint64 currentTimeUsec)
{
    HttpClient_SR_SocketData* handler = (HttpClient_SR_SocketData*)handlerIn;
    MI_UNUSED(sel);

    if (((mask & SELECTOR_READ) != 0 && !handler->reverseOperations) ||
        ((mask & SELECTOR_WRITE) != 0 && handler->reverseOperations))
    {
        if (!_RequestCallbackRead(handler))
            return MI_FALSE;
    }

    if (((mask & SELECTOR_WRITE) != 0 && !handler->reverseOperations) ||
        ((mask & SELECTOR_READ) != 0 && handler->reverseOperations))
    {
        if (!_RequestCallbackWrite(handler))
            return MI_FALSE;
        while (handler->sendPage != NULL && handler->sentSize < handler->sendPage->u.s.size)
        {                               /* assume 500 bytes per millisecond transmission */
                                        /* wait after to avoid spinning too much on _WriteData */
            unsigned int bytesLeft = (unsigned int)handler->sendPage->u.s.size - (unsigned int)handler->sentSize;
            unsigned long msec = (unsigned long)(bytesLeft / 500 + 1);

            if (_WriteData(handler) == MI_FALSE)
                return MI_FALSE;
            Sleep_Milliseconds(msec);
        }
    }

    /* re-set timeout - if we performed R/W operation, set timeout depending where we are in communication */
    if (mask & (SELECTOR_READ | SELECTOR_WRITE))
        handler->base.fireTimeoutAt = currentTimeUsec + handler->timeoutUsec;

    /* Close connection by timeout */
    if ((mask & SELECTOR_TIMEOUT) != 0)
    {
        if (handler->status != MI_RESULT_OK)
        {
            handler->recvHeaders.httpError = 408;
            handler->status = MI_RESULT_TIME_OUT;
        }
        return MI_FALSE;
    }

    if ((mask & SELECTOR_REMOVE) != 0 || (mask & SELECTOR_DESTROY) != 0)
    {
        HttpClient* self = (HttpClient*)handler->base.data;

        /* notify next stack layer */
        if (handler->status != MI_RESULT_OK)
            (*self->callbackOnStatus)(self, self->callbackData, handler->status);

        /* Yeah, this is hokey, but we need to sleep here to let the */
		/* subsystems have the opportunity to send the data before we close */
		/* the socket, or we'll get a broken pipe/connection reset */
#if defined(CONFIG_OS_WINDOWS)
        Sleep_Milliseconds(1);
#else
        usleep(50);
#endif

        if (handler == NULL)
            return MI_TRUE;

        self->connector = NULL;

        if (handler->ssl)
            SSL_free(handler->ssl);

        Sock_Close(handler->base.sock);

        if (handler->recvPage)
            PAL_Free(handler->recvPage);

        if (handler->sendPage)
            PAL_Free(handler->sendPage);

        if (handler->sendHeader)
            PAL_Free(handler->sendHeader);

        PAL_Free(handler->recvBuffer);
        PAL_Free(handler);
    }

    return MI_TRUE;
}

#ifdef CONFIG_POSIX

/*
 Verify callback when the server authentication certificate's chain of trust is checked. This
 is the same as the Open SSL verify callback function (return preverify_ok), except that it
 logs a diagnostic message when preverify_ok has a failed status.
*/
static int _ctxVerify(
    int preverify_ok,
    X509_STORE_CTX* ctx)
{
    if (preverify_ok <= 0)
    {
        X509* certWithError = X509_STORE_CTX_get_current_cert(ctx);
        int error = X509_STORE_CTX_get_error(ctx);
        char nameBuf[256];

        X509_NAME_oneline(X509_get_subject_name(certWithError), nameBuf, 256);
        trace_SSL_VerifyFailed(error, nameBuf);
    }
    return preverify_ok;
}

/*
 Create an Open SSL context that will be used for secure communication. Set up server and client
 certificate authentication if specified.
*/
static MI_Result _CreateSSLContext(
    HttpClient* self,
    const char* trustedCertsDir,
    const char* certFile,
    const char* privateKeyFile)
{
    SSL_CTX* sslContext = SSL_CTX_new(SSLv23_method());
    if (sslContext == NULL)
    {
        trace_SSL_CannotCreateContext();
        return MI_RESULT_FAILED;
    }
    SSL_CTX_set_quiet_shutdown(sslContext, 1);
    SSL_CTX_set_mode(sslContext, SSL_MODE_AUTO_RETRY);
    SSL_CTX_set_mode(sslContext, SSL_MODE_ENABLE_PARTIAL_WRITE);
    SSL_CTX_set_session_cache_mode(sslContext, SSL_SESS_CACHE_OFF);
    SSL_CTX_sess_set_remove_cb(sslContext, NULL);

    if (trustedCertsDir != NULL)
    {
        /* Cause Open SSL to check the server certificate Subject against its FQDN and
        ** to check the server certificate chain against the contents of *trustedCertsDir.
        */
        if (SSL_CTX_load_verify_locations(sslContext, NULL, trustedCertsDir) < 0)
            trace_SSL_BadTrustDir(trustedCertsDir);
        SSL_CTX_set_verify(sslContext, SSL_VERIFY_PEER, _ctxVerify);
    }

    /* Check if there is a client certificate file (file containing client authentication
    ** certificate) specified. If specified, validate and load the certificate.
    */
    if (certFile != NULL)
    {
		char errorBuf[256];
        int err;
        if (strlen(certFile) < 4)
        {
            trace_SSL_NoServerCertFound(certFile, "File name too short");
CertErrorCleanup:
            SSL_CTX_free(sslContext);
            sslContext = NULL;
            return MI_RESULT_FAILED;
        }

        /* load the specified client certificates */
        trace_SSL_LoadingServerCert(certFile);

        err = SSL_CTX_use_certificate_file(
                  sslContext,
                  certFile,
                  strcmp(certFile + strlen(certFile) - 4, ".pem") == 0 ?
                      SSL_FILETYPE_PEM :
                      SSL_FILETYPE_ASN1);
        if (err <= 0)
        {
            trace_SSL_NoServerCertFound(certFile, GetSslErrorString(errorBuf, 256));
            goto CertErrorCleanup;
        }

        if (privateKeyFile != NULL)
        {
            if (strlen(privateKeyFile) < 4)
            {
                trace_SSL_NoServerCertFound(certFile, "File name too short");
                goto CertErrorCleanup;
            }

            /* load the specified private key */
            trace_SSL_LoadingCertPrivateKey(privateKeyFile);
            err = SSL_CTX_use_RSAPrivateKey_file(
                      sslContext,
                      privateKeyFile,
                      strcmp(privateKeyFile + strlen(privateKeyFile) - 4, ".pem") == 0 ?
                          SSL_FILETYPE_PEM :
                          SSL_FILETYPE_ASN1);
            if (err <= 0)
            {
                trace_SSL_NoServerCertFound(privateKeyFile, GetSslErrorString(errorBuf, 256));
                goto CertErrorCleanup;
            }
        }
    }

    self->sslContext = sslContext;
    return MI_RESULT_OK;
}

#endif

static MI_Result _CreateSocketAndConnect(
    Sock* s,
    Addr* addr)
{
    MI_Result r;

    /* Create client socket. */
    r = Sock_Create(s, addr->is_ipv6);
    if (r != MI_RESULT_OK)
        return r;

    r = Sock_SetBlocking(*s, MI_FALSE);
    if (r != MI_RESULT_OK)
        return r;

    r = Sock_Connect(*s, addr);
    if (r != MI_RESULT_OK)
        return r;

    return MI_RESULT_OK;
}

static MI_Result _CreateConnectorSocket(
    HttpClient* self,
    const char* host,
    unsigned short port,
    MI_Boolean secure)
{
    Addr addr;
    MI_Result r;
    Sock s;
    HttpClient_SR_SocketData* h;
    MI_Uint64 currentTimeUsec;

    /* timeout calculation */
    if (PAL_Time(&currentTimeUsec) != PAL_TRUE)
        return MI_RESULT_FAILED;

    /* This code tries to connect using the preferred addressing family (IPv4 */
	/* or IPv6). If that fails and Addr_Init has a secondary addressing */
	/* family, a connection with the secondary family, it tries using the */
	/* secondary family next. */

    /* Initialize preferred address */
    r = Addr_Init(&addr, host, port, MI_FALSE);
    if (r != MI_RESULT_OK)
        return r;

    /* Connect to the server */
    r = _CreateSocketAndConnect(&s, &addr);
    if (r != MI_RESULT_OK && r != MI_RESULT_WOULD_BLOCK)
    {
        MI_Result r2;

        Sock_Close(s);

        /* Initialize secondary address */
        r2 = Addr_Init(&addr, host, port, MI_TRUE);
        if (r2 != MI_RESULT_OK)
            return r;                   /* on error, return original failure */
        r2 = _CreateSocketAndConnect(&s, &addr);
        if (r2 != MI_RESULT_OK && r2 != MI_RESULT_WOULD_BLOCK)
        {
            Sock_Close(s);

            return r;                   /* on error, return original failure */
        }
        r = r2;
    }

    /* Create handler */
    h = (HttpClient_SR_SocketData*)PAL_Calloc(1, sizeof (HttpClient_SR_SocketData));

    if (!h)
    {
        Sock_Close(s);
        return MI_RESULT_FAILED;
    }

    h->recvBufferSize = INITIAL_BUFFER_SIZE;
    h->recvBuffer = (char*)PAL_Calloc(1, h->recvBufferSize);
    if (!h->recvBuffer)
    {
        PAL_Free(h);
        Sock_Close(s);
        return MI_RESULT_FAILED;
    }

    h->base.sock = s;
    h->base.mask = SELECTOR_EXCEPTION;
    h->base.callback = _RequestCallback;
    h->base.data = self;
    h->timeoutUsec = DEFAULT_HTTP_TIMEOUT_USEC;
    h->base.fireTimeoutAt = currentTimeUsec + h->timeoutUsec;

    /* SSL support */
    if (secure)
    {
        h->ssl = SSL_new(self->sslContext);

        if (!h->ssl)
        {
            trace_SSLNew_Failed();
            PAL_Free(h);
            Sock_Close(s);
            return MI_RESULT_FAILED;
        }

        if (!(SSL_set_fd(h->ssl, s) ))
        {
            trace_SSL_setfd_Failed();
            SSL_free(h->ssl);
            PAL_Free(h);
            Sock_Close(s);
            return MI_RESULT_FAILED;
        }

        SSL_set_connect_state(h->ssl);
    }

    /* Watch for read events on the incoming connection */
    r = Selector_AddHandler(self->selector, &h->base);

    if (r != MI_RESULT_OK)
    {
        trace_SelectorAddHandler_Failed();
        if (secure)
            SSL_free(h->ssl);
        PAL_Free(h);
        Sock_Close(s);
        return MI_RESULT_FAILED;
    }

    self->connector = h;

    return MI_RESULT_OK;
}

static MI_Result _New_Http(
    HttpClient** selfOut,
    Selector* selector, /*optional, maybe NULL*/
    HttpClientCallbackOnStatus statusCallback,
    HttpClientCallbackOnResponse  responseCallback,
    void* callbackData)
{
    HttpClient* self;

    /* Check parameters */
    if (!selfOut)
        return MI_RESULT_INVALID_PARAMETER;

    /* Clear output parameter */
    *selfOut = NULL;

    /* Allocate structure */
    {
        self = (HttpClient*)PAL_Calloc(1, sizeof (HttpClient));

        if (!self)
            return MI_RESULT_FAILED;
    }

    if (selector)
    {   /* attach the exisiting selector */
        self->selector = selector;
        self->internalSelectorUsed = MI_FALSE;
    }
    else
    {   /* creaet a new selector */
        /* Initialize the network */
        Sock_Start();

        /* Initialize the selector */
        if (Selector_Init(&self->internalSelector) != MI_RESULT_OK)
        {
            PAL_Free(self);
            return MI_RESULT_FAILED;
        }
        self->selector = &self->internalSelector;
        self->internalSelectorUsed = MI_TRUE;
    }

    /* Save the callback and callbackData */
    self->callbackOnResponse = responseCallback;
    self->callbackOnStatus = statusCallback;
    self->callbackData = callbackData;

    /* Set the magic number */
    self->magic = _MAGIC;

    /* Set output parameter */
    *selfOut = self;
    return MI_RESULT_OK;
}

static size_t _GetHeadersSize(
    const HttpClientRequestHeaders* headers)
{
    size_t res = 0;
    size_t index = 0;

    while (index < headers->size)
    {
        res += Strlen(headers->data[index]);
        res += 2; /* \r \n pair */
        index++;
    }

    return res;
}

static Page* _CreateHttpHeader(
    const char* verb,
    const char* uri,
    const HttpClientRequestHeaders* headers,
    size_t size)
{
    Page* page = 0;
    size_t pageSize = 0;
    int r;
    char* p;

#define HTTP_HEADER_FORMAT "%s %s HTTP/1.1\r\n" \
    "Content-Length: %d\r\n"\
    "Connection: Keep-Alive\r\n" \
    "Host: host\r\n"

#define HTTP_HEADER_FORMAT_NOCL "%s %s HTTP/1.1\r\n" \
    "Connection: Keep-Alive\r\n" \
    "Host: host\r\n"

    /* calculate approximate page size */
    if (!verb)
        verb = "POST";
    pageSize += sizeof (HTTP_HEADER_FORMAT) + 10; /* format + 10 digits of content length */
    pageSize += Strlen(verb);
    pageSize += Strlen(uri);

    if (headers)
        pageSize += _GetHeadersSize(headers);

    page = (Page*)PAL_Malloc(pageSize + sizeof (Page));

    if (!page)
        return 0;

    /* clear header */
    memset(page, 0, sizeof (Page));

    p = (char*)(page + 1);

    if (size)
        r = Snprintf(p, pageSize, HTTP_HEADER_FORMAT, verb, uri, (int)size);
    else
        r = Snprintf(p, pageSize, HTTP_HEADER_FORMAT_NOCL, verb, uri);

    if (r < 0)
    {
        PAL_Free(page);
        return 0;
    }

    p += r;
    pageSize -= r;

    if (headers)
    {
        size_t index = 0;

        while (index < headers->size)
        {
            r = (int)Strlcpy(p,headers->data[index], pageSize);
            p += r;
            pageSize -= r;
            r = (int)Strlcpy(p,"\r\n", pageSize);
            p += r;
            pageSize -= r;

            index++;
        }
    }

    /* add trailing \r\n */
    r = (int)Strlcpy(p,"\r\n", pageSize);
    p += r;
    pageSize -= r;

    page->u.s.size = (unsigned int)(p - (char*)(page+1));

    return page;
}

/* ************************************************************************* *\
                                HTTP CLIENT
\* ************************************************************************* */
/*
    Creates new http client.

    Parameters:
    selfOut - [out] newly created http object (or null if failed).
    selector - [opt] selector to use for socket monitoring. If selector not specified,
            private one is created.
    host - host address
    port - port number
    secure - flag that indicates if http or https conneciton is required

    Returns:
    'OK' on success or error code otherwise
*/
MI_Result HttpClient_New_Connector(
    HttpClient** selfOut,
    Selector* selector, /*optional, maybe NULL*/
    const char* host,
    unsigned short port,
    MI_Boolean secure,
    HttpClientCallbackOnStatus statusCallback,
    HttpClientCallbackOnResponse  responseCallback,
    void* callbackData,
    const char* trustedCertsDir,
    const char* certFile,
    const char* privateKeyFile)
{
    HttpClient* self;
    MI_Result r;

    /* allocate this, inits selector */
    r = _New_Http(selfOut, selector, statusCallback,
                  responseCallback, callbackData);

    if (MI_RESULT_OK != r)
        return r;
    self = *selfOut;

#ifdef CONFIG_POSIX
    /* Allocate SSL context */
    if (secure)
    {
        /* init ssl */
        SSL_library_init();

        /* create context */
        r = _CreateSSLContext(self, trustedCertsDir, certFile, privateKeyFile);

        if (r != MI_RESULT_OK)
        {
            HttpClient_Delete(self);
            *selfOut = NULL;
            return r;
        }
    }
#else
    MI_UNUSED(secure);
#endif

    /* Create http connector socket */
    {
        r = _CreateConnectorSocket(self, host, port, secure);

        if (r != MI_RESULT_OK)
        {
            HttpClient_Delete(self);
            return r;
        }
    }

    return MI_RESULT_OK;
}

/*
    Deletes http object, disconnects form the server
    and frees all related resources.

    Parameters:
    self - http object

    Returns:
    OK
*/
MI_Result HttpClient_Delete(
    HttpClient* self)
{
    /* Check parameters */
    if (!self)
        return MI_RESULT_INVALID_PARAMETER;

    /* Check magic number */
    if (self->magic != _MAGIC)
        return MI_RESULT_INVALID_PARAMETER;

    if (self->internalSelectorUsed)
    {
        /* Release selector;
        Note: Selector_Destroy closes all sockets in a list including connector and listener */
        Selector_Destroy(self->selector);

        /* Shutdown the network */
        Sock_Stop();
    }
    else
    {
        /* remove connector from handler */
        if (self->connector)
            Selector_RemoveHandler(self->selector, &self->connector->base);
    }

    if (self->sslContext)
        SSL_CTX_free(self->sslContext);

    /* Clear magic number */
    self->magic = 0xDDDDDDDD;

    /* Free self pointer */
    PAL_Free(self);

    return MI_RESULT_OK;
}

/*
    Sends http request.

    Parameters:
    self - http object
    uri - request's URI
    headers - [opt] extra headers for request.
    data - [opt] content to send. if message is accepted to be sent,
        on return *data == null (taking memory ownership)

    Returns:
    OK or appropriate error
 */
MI_Result HttpClient_StartRequest(
    HttpClient* self,
    const char* verb,
    const char* uri,
    const HttpClientRequestHeaders* headers,
    Page** data)
{
    /* check params */
    if (!self || !uri)
        return MI_RESULT_INVALID_PARAMETER;

    if (self->magic != _MAGIC)
    {
        trace_StartRequest_InvalidMagic();
        return MI_RESULT_INVALID_PARAMETER;
    }

    if (!self->connector)
    {
        trace_StartRequest_ConnectionClosed();
        return MI_RESULT_FAILED;
    }

    /* create header page */
    self->connector->sendHeader =
        _CreateHttpHeader(verb, uri, headers, (data && *data) ? (*data)->u.s.size : 0);

    if (data)
    {
        self->connector->sendPage = *data;
        *data = NULL;
    }
    else
        self->connector->sendPage = NULL;

    /* set status to failed, until we know more details */
    self->connector->status = MI_RESULT_FAILED;
    self->connector->sentSize = 0;
    self->connector->sendingState = RECV_STATE_HEADER;
    self->connector->base.mask |= SELECTOR_WRITE;

    _RequestCallbackWrite(self->connector);

    return MI_RESULT_OK;
}

MI_Result HttpClient_Run(
    HttpClient* self,
    MI_Uint64 timeoutUsec)
{
    /* Run the selector */
    return Selector_Run(self->selector, timeoutUsec, MI_FALSE);
}

MI_Result HttpClient_SetTimeout(
    HttpClient* self,
    MI_Uint64 timeoutUsec)
{
    MI_Uint64 currentTimeUsec = 0;

    PAL_Time(&currentTimeUsec);

    /* check params */
    if (!self)
        return MI_RESULT_INVALID_PARAMETER;

    if (self->magic != _MAGIC)
    {
        trace_Timeout_InvalidMagic();
        return MI_RESULT_INVALID_PARAMETER;
    }

    if (!self->connector)
        return MI_RESULT_INVALID_PARAMETER;

    /* create header page */
    self->connector->timeoutUsec = timeoutUsec;
    self->connector->base.fireTimeoutAt = currentTimeUsec + self->connector->timeoutUsec;

    return MI_RESULT_OK;
}
