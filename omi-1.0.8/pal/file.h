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

#ifndef _pal_file_h
#define _pal_file_h

#include <stdio.h>

#include "palcommon.h"

PAL_BEGIN_EXTERNC

FILE* File_Open(
    _In_z_ const char* path,
    _In_z_ const char* mode);

void File_Close(FILE* fp);

int File_Remove(
    _In_z_ const char* path);

int File_Touch(
    _In_z_ const char* path);

int File_Copy(
    _In_z_ const char* src,
    _In_z_ const char* dest);

PAL_END_EXTERNC

#endif /* _pal_file_h */
