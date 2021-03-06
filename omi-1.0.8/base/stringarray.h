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

#ifndef _omi_stringarray_h
#define _omi_stringarray_h

#include "config.h"
#include <common.h>
#include <stdio.h>
#include "batch.h"

BEGIN_EXTERNC

/*
**==============================================================================
**
** StringArray
**
**     Manages a null-terminated array of strings.
**
**==============================================================================
*/

typedef struct _StringArray
{
    Batch* batch;
    ZChar** data;
    size_t size;
    size_t capacity;
}
StringArray;

MI_Result StringArray_Init(
    StringArray* self,
    size_t capacity,
    Batch* batch);

MI_Result StringArray_Add(
    StringArray* self,
    const ZChar* str);

void StringArray_Print(
    const StringArray* self,
    FILE* os);

END_EXTERNC

#endif /* _omi_stringarray_h */
