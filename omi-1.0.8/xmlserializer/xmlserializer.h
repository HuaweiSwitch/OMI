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

#ifndef _XML_SERIALIZER_H_
#define _XML_SERIALIZER_H_

#include <MI.h>

BEGIN_EXTERNC
// for internal use; not a public api
// Do not define flags with value same as ones below for serializer in MI.h
#define MI_SERIALIZER_FLAGS_INCLUDE_CLASS_ORIGIN 0x100
#define MI_SERIALIZER_FLAGS_INCLUDE_INHERITANCE_HIERARCHY 0x200
// note that MI_SERIALIZER_FLAGS_CLASS_DEEP has same semantics as following
// but i have defined it to make it clear that it is catering to includeInheritedElements option
// and doing this way was also convenient since i could pass in the MessageFlag flags directly into this serializer
#define MI_SERIALIZER_FLAGS_INCLUDE_INHERITED_ELEMENTS 0x400
#define MI_SERIALIZER_FLAGS_INCLUDE_QUALIFIERS 0x800


MI_Result MI_CALL XmlSerializer_Create(
    _In_ MI_Application *application, 
    MI_Uint32 flags,
    _In_z_ MI_Char *format, 
    _Out_ MI_Serializer *serializer);

MI_Result MI_CALL XmlSerializer_Close(
    _Inout_ MI_Serializer *serializer);

MI_Result MI_CALL XmlSerializer_SerializeClass(
    _Inout_ MI_Serializer *serializer, 
    MI_Uint32 flags, 
    _In_ const MI_Class *classObject, 
    _Out_writes_bytes_(clientBufferLength) MI_Uint8 *clientBuffer,
    MI_Uint32 clientBufferLength,
    _Inout_ MI_Uint32 *clientBufferNeeded);

END_EXTERNC
#endif /* _XML_SERIALIZER_H_ */
