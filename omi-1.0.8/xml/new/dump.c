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

#if defined(CONFIG_ENABLE_WCHAR)
# define T(STR) L##STR
# define XML_printf wprintf
#else
# define T(STR) STR
# define XML_printf printf
#endif

void XML_Elem_Dump(
    __in const XML_Elem* s)
{
    static const Char* _typeNames[] =
    {
        T("NONE"),
        T("START"),
        T("END"),
        T("INSTRUCTION"),
        T("CHARS"),
        T("COMMENT"),
    };
    size_t i;

    XML_printf(T("==== XML_Elem:\n"));
    XML_printf(T("type={%s}\n"), _typeNames[(int)s->type]);
    XML_printf(T("data={%s}\n"), s->data);
    XML_printf(T("size=%u\n"), (int)s->size);

    if (s->attrsSize)
    {
        for (i = 0; i < s->attrsSize; i++)
        {
            const XML_Attr* attr = &s->attrs[i];
            XML_printf(T("%s=%s\n"), attr->name, attr->value);
        }
    }

    putchar('\n');
}

void XML_NameSpace_Dump(
    __in XML_NameSpace* self)
{
    XML_printf(T("==== XML_NameSpace:\n"));
    XML_printf(T("name={%s}\n"), self->name);
    XML_printf(T("id={%c}\n"), (int)self->id);
    XML_printf(T("uri={%s}\n"), self->uri);
    XML_printf(T("depth={%u}\n"), (int)self->depth);
    XML_printf(T("\n"));
}

void XML_Dump(
    __in XML* self)
{
    size_t i;

    XML_printf(T("==== XML:\n"));
    XML_printf(T("nameSpaces:\n"));

    for (i = 0; i < self->nameSpacesSize; i++)
    {
        XML_NameSpace_Dump(&self->nameSpaces[i]);
    }

    putchar('\n');
}
