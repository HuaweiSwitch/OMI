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

#ifndef _httpcleitncxx_h
#define _httpcleitncxx_h

#include <cstddef>
#include <string>
#include <vector>
#include <map>

//==============================================================================
//
// HTTPCLIENT_EXPORT
// HTTPCLIENT_IMPORT
// HTTPCLIENT_LINKAGE
//
//==============================================================================

#if defined(_MSC_VER)
# define HTTPCLIENT_EXPORT __declspec(dllexport)
# define HTTPCLIENT_IMPORT __declspec(dllimport)
#elif defined(__GNUC__)
# define HTTPCLIENT_EXPORT __attribute__((visibility("default")))
# define HTTPCLIENT_IMPORT /* empty */
#elif defined(sun)
# define HTTPCLIENT_EXPORT __global 
# define HTTPCLIENT_IMPORT /* empty */
#else
# define HTTPCLIENT_EXPORT 
# define HTTPCLIENT_IMPORT
#endif

#ifdef BUILDING_HTTPCLIENT
#  define HTTPCLIENT_LINKAGE HTTPCLIENT_EXPORT
#else
#  define HTTPCLIENT_LINKAGE HTTPCLIENT_IMPORT
#endif

//==============================================================================
//
// HTTPCLIENT_BEGIN
// HTTPCLIENT_END
//
//==============================================================================

#define HTTPCLIENT_BEGIN namespace httpclient {
#define HTTPCLIENT_END }


HTTPCLIENT_BEGIN

//==============================================================================
//
// enum Result
//  Common set of error codes used in http client library
//
//==============================================================================
enum Result
{
    OKAY,       /* operations was successful */
    TIMEOUT,    /* operation was not completed within required timeout */
    FAILED,     /* network error (closed connection, unable to connet etc) */
    CANCELED    /* operation was canceled by user */
};

//==============================================================================
//
// class HttpClientCallback
//  User-provided interface. Http-lib uses it to notify user
//  about new data or operation status.
//  Successful session will have:
//  OnHeader(), [OnData(), [OnData(), ...,]] OnStatus()
//
//  Each request/response sequence is completed by 'OnStatus' call
//  
//
//==============================================================================
class HttpClientCallback
{
public:
    // library calls this function at the end of each http request/response 
    // sequence in both successful and unsuccessful cases.
    // Parameters:
    //  res - result of operation
    virtual void OnStatus(
        Result res) = 0;

    // library calls this function once it retrieved and parsed
    // entire http header from server's response
    // Parameters:
    //  httpError - http error code, like '200', 401' etc
    //  headers - map of all headers in name->value form
    // contentLength - content length of data; It allows client to
    //  pre-allocate space (create a file with required size etc).
    //  Two special values are possible:
    //  0 if no data, 
    //  -1 if unknown (chunked encoding).
    // Returns:
    //  user should return 'true' to continue operation.
    //  Otherwise, library closes connection. 
    virtual bool OnResponseHeader(
        int httpError, 
        const std::map< std::string, std::string >& headers, 
        int contentLength) = 0;

    // library calls this function every time
    // when new chunk of data is available
    // Parameters:
    //  data - new data chunk
    //  lastChunk - flag that indicates if current chunk is 
    //  the last one (useful in case of chunked encoding)
    // Returns:
    //  user should return 'true' to continue operation.
    //  Otherwise, library closes connection. 
    virtual bool OnResponseData(
        const std::vector< unsigned char >& data, 
        bool lastChunk) = 0;

protected:
	virtual ~HttpClientCallback() {}
};

//==============================================================================
//
// class HttpClient
//  This class provides http client API
//  All operations are performed asynchronously.
//  Library creates one extra thread for IO operations;
//  it also uses this thread to invoke user's callbacks.
//
//==============================================================================
class HTTPCLIENT_LINKAGE HttpClient
{
public:
    // Destructor.
    ~HttpClient();

    // The only constructor. Creates http client object.
    // First instance will create background thread for IO operations.
    // Client object assumes provided callback pointer is always valid
    // for live-time. User is responsible to insure live-time of
    // provided pointer is longer then live0time of HttpClient instance.
    // Parameters:
    //  callback - user-implemented notification callback
    HttpClient(HttpClientCallback* callback);

    // Starts connection to the server.
    // Operation performed asynchronously (returns instantly), 
    // so if it fails, error 
    // will be delivered via OnStatus callback
    // Parameters:
    //  host - host name (can be ip or dns name)
    //  port
    //  secure - 'true' if https conneciton required
    Result Connect( 
        const char* host, 
        unsigned short port, 
        bool secure);

    // Starts http request/response sequence.
    // Operation performed asynchronously (returns instantly), 
    // result delivered via OnStatus/OnResponse callbacks
    // Parameters:
    //  verb - "POST"/"GET" http request type
    //  uri - 
    //  extraHeaders [opt] - additional headers, that client needs to send
    //      to the server. Can be empty. Library sets required headers automatically
    //  data [opt] - data, that client wants to send to the server
    //  blockUntilCompleted - flag to enforce 'sync' mode of operation.
    //      In some cases user does not need async operation and prefers
    //      to have simpler sync way to handle http request/response.
    //      Library still uses callbacks to deliver repsonse data and status,
    //      but 'StartRequest' call blocks until entire communication is completed.
    //  Return
    //      OKAY if operation was started successfully
    //      error code otherwise
    Result StartRequest(
        const char* verb,
        const char* uri,
        const std::map< std::string, std::string >& extraHeaders,
        const std::vector< unsigned char >& data,
        bool blockUntilCompleted);


    // Cancels ongoing asynchronus http request.
    // If operation is not completed, library stops waiting
    // for server's response, calls 'OnStatus' callback with 'CANCELED'
    // code. 
    // Library closes connection and frees all resopurces.
    // this is the last operation that can be performed on given http object .
    void Cancel();

    // Sets timeout for future sessions.
    // User should call before Connect
    //  Parameters:
    //  timeoutMS - timeout of the sesison in ms
    void SetOperationTimeout(
        int timeoutMS);

private:
    // not supported operations
    HttpClient(const HttpClient&);
    void operator = (const HttpClient&);

    // implementation
    class HttpClientRep* _rep;
};


HTTPCLIENT_END

#endif /* _httpcleitncxx_h */
