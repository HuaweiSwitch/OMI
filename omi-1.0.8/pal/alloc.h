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

#ifndef _alloc_h
#define _alloc_h

#include <nits/base/nits.h>

/*
**==============================================================================
**
** No Allocator:
**
**==============================================================================
*/

PAL_BEGIN_EXTERNC

PAL_INLINE void* SystemMallocCallsite(
    NitsCallSite callsite,
    size_t size)
{
    if (NitsShouldFault(callsite, NitsAutomatic))
        return NULL;

    return malloc(size);
}

PAL_INLINE void* SystemCallocCallsite(
    NitsCallSite callsite,
    size_t count,
    size_t size)
{
    if (NitsShouldFault(callsite, NitsAutomatic))
        return NULL;

    return calloc(count, size);
}

PAL_INLINE void* SystemReallocCallsite(
    NitsCallSite callsite,
    void* ptr,
    size_t size)
{
    if (NitsShouldFault(callsite, NitsAutomatic))
        return NULL;

    return realloc(ptr, size);
}

#if !defined(USE_ALLOCATOR)

# define PAL_MallocCallsite SystemMallocCallsite
# define PAL_CallocCallsite SystemCallocCallsite
# define PAL_ReallocCallsite SystemReallocCallsite

#else

# define PAL_MallocCallsite(callsite, size) __PAL_MallocCallsite(callsite, size)
void* __PAL_MallocCallsite(
    NitsCallSite callsite,
    size_t size);


# define PAL_CallocCallsite(callsite, count, size) __PAL_CallocCallsite(callsite, count, size)
void* __PAL_CallocCallsite(
    NitsCallSite callsite,
    size_t count,
    size_t size);


# define PAL_ReallocCallsite(callsite, ptr, size) __PAL_ReallocCallsite(callsite, ptr, size)
void* __PAL_ReallocCallsite(
    NitsCallSite callsite,
    void* ptr,
    size_t size);


#endif /* !defined(USE_ALLOCATOR) */

PAL_END_EXTERNC


#endif
