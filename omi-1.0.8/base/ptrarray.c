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

#include "ptrarray.h"
#include <stdlib.h>

int PtrArray_Construct(
    PtrArray* self,
    size_t capacity,
    void (MI_MAIN_CALL *destructor)(void*))
{
    if (capacity == 0)
        capacity = 1;

    self->size = 0;
    self->capacity = capacity;
    self->destructor = destructor;

    self->data = (void**)PAL_Malloc(self->capacity * sizeof(void*));

    if (!self->data)
        return -1;

    return 0;
}

void PtrArray_Destruct(
    PtrArray* self)
{
    if (self->destructor)
    {
        size_t i;

        for (i = 0; i < self->size; i++)
            (*self->destructor)(self->data[i]);

        self->destructor = NULL;
    }

    if (self->data)
    {
        PAL_Free(self->data);
        self->data = NULL;
    }
}

_Use_decl_annotations_
int PtrArray_Append(
    PtrArray* self, 
    void* element)
{
    if (self->size == self->capacity)
    {
        void** _newdata;
        size_t _oldcapacity = self->capacity;
        size_t _oldsize = _oldcapacity * sizeof(void*);
        size_t _newcapacity = _oldcapacity << 1;
        size_t _newsize = _oldsize << 1;

        /* size_t overflowed */
        if ((_newcapacity <= _oldcapacity) || (_newsize <= _oldsize))
            return -1;

        _newdata = (void**)PAL_Realloc(self->data, _newsize);
        if (!_newdata)
        {
            PtrArray_Destruct(self);
            return -1;
        }
        else
        {
            self->capacity = _newcapacity;
            self->data = _newdata;
        }
    }

    self->data[self->size++] = element;
    return 0;
}
