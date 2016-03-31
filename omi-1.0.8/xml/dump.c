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

#include "xml.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pal/format.h>

#define T PAL_T

void XML_Elem_Dump(
    _In_ const XML_Elem* s)
{
    static const XML_Char* _typeNames[] =
    {
        T("NONE"),
        T("START"),
        T("END"),
        T("INSTRUCTION"),
        T("CHARS"),
        T("COMMENT"),
    };
    size_t i;

    Tprintf(T("type={%T}\n"), tcs(_typeNames[(int)s->type]));
    if (s->data.namespaceUriSize)
    {
        Tprintf(T("data={%T:%T}\n"), tcs(s->data.namespaceUri), tcs(s->data.data));
    }
    else
    {
        Tprintf(T("data={%T}\n"), tcs(s->data.data));
    }
    Tprintf(T("size=%u\n"), (int)s->data.size);

    if (s->attrsSize)
    {
        for (i = 0; i < s->attrsSize; i++)
        {
            const XML_Attr* attr = &s->attrs[i];
            Tprintf(T("%T=%T\n"), tcs(attr->name.data), tcs(attr->value));
        }
    }

    Tprintf(T("\n"));
}

void XML_NameSpace_Dump(
    _In_ XML_NameSpace* self)
{
    Tprintf(T("==== XML_NameSpace:\n"));
    Tprintf(T("name={%T}\n"), tcs(self->name));
    Tprintf(T("id={%c}\n"), (int)self->id);
    Tprintf(T("uri={%T}\n"), tcs(self->uri));
    Tprintf(T("depth={%u}\n"), (int)self->depth);
    Tprintf(T("\n"));
}

void XML_Dump(
    _In_ XML* self)
{
    size_t i;

    Tprintf(T("==== XML:\n"));
    Tprintf(T("nameSpaces:\n"));

    for (i = 0; i < self->nameSpacesSize; i++)
    {
        XML_NameSpace_Dump(&self->nameSpaces[i]);
    }

    Tprintf(T("\n"));
}

void XML_PutError(_Inout_ XML* self)
{
    if (self->status == -1)
    {
        Tprintf(
            PAL_T("line %u: %T\n"), 
            (int)self->line, 
            tcs(self->message));
    }
}
