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

#ifndef _pal_tls_h
#define _pal_tls_h

#include <stddef.h>
#include <nits/base/nits.h>

#if defined(PAL_HAVE_PTHREADS)
# include <pthread.h>
#endif

PAL_BEGIN_EXTERNC

typedef struct _TLS 
{
#if defined(_MSC_VER)
    DWORD index;
#else
    pthread_key_t key;
#endif
}
TLS;

_Return_type_success_(return == 0) int TLS_Init_Injected(
    _Out_ TLS* self,
    NitsCallSite cs);

#define TLS_Init(self) TLS_Init_Injected(self, NitsHere())

PAL_INLINE int TLS_Destroy(
    _Inout_ TLS* self)
{
#if defined(_MSC_VER)
    return TlsFree(self->index) ? 0 : -1;
#else
    return pthread_key_delete(self->key) == 0 ? 0 : -1;
#endif
}

PAL_INLINE int TLS_Set(
    _Inout_ TLS* self,
    _In_ ptrdiff_t data)
{
#if defined(_MSC_VER)
    return TlsSetValue(self->index, (void*)data) ? 0 : -1;
#else
    return pthread_setspecific(self->key, (void*)data) == 0 ? 0 : -1;
#endif
}

PAL_INLINE ptrdiff_t TLS_Get(
    _In_ TLS* self)
{
#if defined(_MSC_VER)
    return (ptrdiff_t)TlsGetValue(self->index);
#else
    return (ptrdiff_t)pthread_getspecific(self->key);
#endif
}

PAL_END_EXTERNC

#endif /* _pal_tls_h */
