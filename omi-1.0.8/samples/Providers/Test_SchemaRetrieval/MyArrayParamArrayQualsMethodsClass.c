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

/* @migen@ */
#include <MI.h>
#include "MyArrayParamArrayQualsMethodsClass.h"

void MI_CALL MyArrayParamArrayQualsMethodsClass_Load(
    MyArrayParamArrayQualsMethodsClass_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MyArrayParamArrayQualsMethodsClass_Unload(
    MyArrayParamArrayQualsMethodsClass_Self* self,
    MI_Context* context)
{
    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MyArrayParamArrayQualsMethodsClass_Invoke_BooleanMethod(
    MyArrayParamArrayQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MyArrayParamArrayQualsMethodsClass* instanceName,
    const MyArrayParamArrayQualsMethodsClass_BooleanMethod* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MyArrayParamArrayQualsMethodsClass_Invoke_StringMethod(
    MyArrayParamArrayQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MyArrayParamArrayQualsMethodsClass* instanceName,
    const MyArrayParamArrayQualsMethodsClass_StringMethod* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MyArrayParamArrayQualsMethodsClass_Invoke_Char16Method(
    MyArrayParamArrayQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MyArrayParamArrayQualsMethodsClass* instanceName,
    const MyArrayParamArrayQualsMethodsClass_Char16Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MyArrayParamArrayQualsMethodsClass_Invoke_Uint8Method(
    MyArrayParamArrayQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MyArrayParamArrayQualsMethodsClass* instanceName,
    const MyArrayParamArrayQualsMethodsClass_Uint8Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MyArrayParamArrayQualsMethodsClass_Invoke_Sint8Method(
    MyArrayParamArrayQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MyArrayParamArrayQualsMethodsClass* instanceName,
    const MyArrayParamArrayQualsMethodsClass_Sint8Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MyArrayParamArrayQualsMethodsClass_Invoke_Uint16Method(
    MyArrayParamArrayQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MyArrayParamArrayQualsMethodsClass* instanceName,
    const MyArrayParamArrayQualsMethodsClass_Uint16Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MyArrayParamArrayQualsMethodsClass_Invoke_Sint16Method(
    MyArrayParamArrayQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MyArrayParamArrayQualsMethodsClass* instanceName,
    const MyArrayParamArrayQualsMethodsClass_Sint16Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MyArrayParamArrayQualsMethodsClass_Invoke_Uint32Method(
    MyArrayParamArrayQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MyArrayParamArrayQualsMethodsClass* instanceName,
    const MyArrayParamArrayQualsMethodsClass_Uint32Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MyArrayParamArrayQualsMethodsClass_Invoke_Sint32Method(
    MyArrayParamArrayQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MyArrayParamArrayQualsMethodsClass* instanceName,
    const MyArrayParamArrayQualsMethodsClass_Sint32Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MyArrayParamArrayQualsMethodsClass_Invoke_Uint64Method(
    MyArrayParamArrayQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MyArrayParamArrayQualsMethodsClass* instanceName,
    const MyArrayParamArrayQualsMethodsClass_Uint64Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MyArrayParamArrayQualsMethodsClass_Invoke_Sint64Method(
    MyArrayParamArrayQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MyArrayParamArrayQualsMethodsClass* instanceName,
    const MyArrayParamArrayQualsMethodsClass_Sint64Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MyArrayParamArrayQualsMethodsClass_Invoke_Real32Method(
    MyArrayParamArrayQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MyArrayParamArrayQualsMethodsClass* instanceName,
    const MyArrayParamArrayQualsMethodsClass_Real32Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MyArrayParamArrayQualsMethodsClass_Invoke_Real64Method(
    MyArrayParamArrayQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MyArrayParamArrayQualsMethodsClass* instanceName,
    const MyArrayParamArrayQualsMethodsClass_Real64Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MyArrayParamArrayQualsMethodsClass_Invoke_DatetimeMethod(
    MyArrayParamArrayQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MyArrayParamArrayQualsMethodsClass* instanceName,
    const MyArrayParamArrayQualsMethodsClass_DatetimeMethod* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

