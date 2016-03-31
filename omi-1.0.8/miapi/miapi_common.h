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


#if !defined(_miapi_common_h_)
#define _miapi_common_h_

#include <pal/format.h>

#if defined(_MSC_VER)
#define MI_CLIENT_IMPERSONATION_TOKEN HANDLE
#else
#define _aligned_malloc(size, ignore) PAL_Malloc(size)
#define _aligned_free(ptr) PAL_Free(ptr)
#define MI_CLIENT_IMPERSONATION_TOKEN void *
#if !defined(INVALID_HANDLE_VALUE)
#define INVALID_HANDLE_VALUE 0
#endif
#define TerminateProcess(process,code) exit(code)
#define GetCurrentProcess() 0
#define SecureZeroMemory(dest, size) memset(dest, 0, size)
#endif
#endif

