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

#ifndef _pal_shmem_h
#define _pal_shmem_h


#include <stddef.h>
#include "palcommon.h"

#if defined(PAL_HAVE_POSIX)
# include <unistd.h>
# include <sys/mman.h>
# include <sys/shm.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h>
#endif

PAL_BEGIN_EXTERNC

typedef struct _Shmem 
{
#if defined(_MSC_VER)
    HANDLE handle;
#else
    int shmid;
    char shmname[PAL_MAX_PATH_SIZE];
#endif
} 
Shmem;

typedef enum _ShmemUserAccess
{
    SHMEM_USER_ACCESS_DEFAULT = 1,
    SHMEM_USER_ACCESS_ALLOW_ALL = 2
} 
ShmemUserAccess;

typedef enum _ShmemAccess
{
    SHMEM_ACCESS_READONLY = 1,
    SHMEM_ACCESS_READWRITE = 2
}
ShmemAccess;

int Shmem_Open(
    _Out_ Shmem* self,
    _In_z_ const PAL_Char* name,
    _In_ ShmemAccess access,
    ShmemUserAccess userAccess,
    _In_ size_t size);

PAL_INLINE int Shmem_Close(
    _Inout_ Shmem* self)
{
#if defined(_MSC_VER)
    return CloseHandle(self->handle) ? 0 : -1;
#else
    int status;

    status = close(self->shmid) == 0 ? 0 : -1;
    shm_unlink(self->shmname);
    return status;
#endif
}

void* Shmem_Map(
    _Inout_ Shmem* self,
    _In_ ShmemAccess access,
    _In_ ptrdiff_t offset,
    _In_ size_t size);

PAL_INLINE int Shmem_Unmap(
    _Inout_ Shmem* self,
    _In_ void* ptr,
    _In_ size_t size)
{
    PAL_UNUSED(self);
    PAL_UNUSED(ptr);
    PAL_UNUSED(size);

#if defined(_MSC_VER)
    PAL_UNUSED(size);
    return UnmapViewOfFile(ptr) ? 0 : -1;
#else
    return munmap(ptr, size) == 0 ? 0 : -1;
#endif
}

PAL_INLINE size_t Shmem_Granularity()
{
#if defined(_MSC_VER)
    SYSTEM_INFO info;
    GetSystemInfo(&info);
    return info.dwAllocationGranularity;
#else
    return sysconf(_SC_PAGESIZE);
#endif
}

PAL_END_EXTERNC

#endif /* _pal_shmem_h */
