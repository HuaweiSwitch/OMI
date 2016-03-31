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

#ifndef _pal_dir_h
#define _pal_dir_h

#include "palcommon.h"

#if defined(_MSC_VER)
# include <io.h>
# include <direct.h>
#else
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
#endif

PAL_BEGIN_EXTERNC

typedef struct _DirEnt 
{
    char name[PAL_MAX_PATH_SIZE];
    int isDir;
}
DirEnt;

typedef struct _Dir Dir;

Dir* Dir_Open(const char* path);

DirEnt* Dir_Read(Dir* dir);

int Dir_Close(Dir* dir);

PAL_INLINE int Mkdir(const char* path, int mode)
{
#if defined(_MSC_VER)
    PAL_UNUSED(mode);
    return _mkdir(path);
#else
    return mkdir(path, mode);
#endif
}

/* Create the given directory and any directories along the path */
int Mkdirhier(const char* path, int mode);

PAL_INLINE int Chdir(const char* path)
{
#if defined(_MSC_VER)
    return _chdir(path);
#else
    return chdir(path);
#endif
}

PAL_INLINE int Rmdir(const char* path)
{
#if defined(_MSC_VER)
    return _rmdir(path);
#else
    return rmdir(path);
#endif
}

PAL_Boolean Isdir(const char* path);

/* Find the 'basename' of a path (final component without leading directory) */
const char* Basename(const char* path);

PAL_END_EXTERNC

#endif /* _pal_dir_h */
