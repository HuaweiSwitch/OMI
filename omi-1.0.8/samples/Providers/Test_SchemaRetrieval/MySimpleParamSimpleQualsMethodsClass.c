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
#include "MySimpleParamSimpleQualsMethodsClass.h"

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Load(
    MySimpleParamSimpleQualsMethodsClass_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Unload(
    MySimpleParamSimpleQualsMethodsClass_Self* self,
    MI_Context* context)
{
    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Invoke_BooleanMethod(
    MySimpleParamSimpleQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MySimpleParamSimpleQualsMethodsClass* instanceName,
    const MySimpleParamSimpleQualsMethodsClass_BooleanMethod* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Invoke_StringMethod(
    MySimpleParamSimpleQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MySimpleParamSimpleQualsMethodsClass* instanceName,
    const MySimpleParamSimpleQualsMethodsClass_StringMethod* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Invoke_Char16Method(
    MySimpleParamSimpleQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MySimpleParamSimpleQualsMethodsClass* instanceName,
    const MySimpleParamSimpleQualsMethodsClass_Char16Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Invoke_Uint8Method(
    MySimpleParamSimpleQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MySimpleParamSimpleQualsMethodsClass* instanceName,
    const MySimpleParamSimpleQualsMethodsClass_Uint8Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Invoke_Sint8Method(
    MySimpleParamSimpleQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MySimpleParamSimpleQualsMethodsClass* instanceName,
    const MySimpleParamSimpleQualsMethodsClass_Sint8Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Invoke_Uint16Method(
    MySimpleParamSimpleQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MySimpleParamSimpleQualsMethodsClass* instanceName,
    const MySimpleParamSimpleQualsMethodsClass_Uint16Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Invoke_Sint16Method(
    MySimpleParamSimpleQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MySimpleParamSimpleQualsMethodsClass* instanceName,
    const MySimpleParamSimpleQualsMethodsClass_Sint16Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Invoke_Uint32Method(
    MySimpleParamSimpleQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MySimpleParamSimpleQualsMethodsClass* instanceName,
    const MySimpleParamSimpleQualsMethodsClass_Uint32Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Invoke_Sint32Method(
    MySimpleParamSimpleQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MySimpleParamSimpleQualsMethodsClass* instanceName,
    const MySimpleParamSimpleQualsMethodsClass_Sint32Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Invoke_Uint64Method(
    MySimpleParamSimpleQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MySimpleParamSimpleQualsMethodsClass* instanceName,
    const MySimpleParamSimpleQualsMethodsClass_Uint64Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Invoke_Sint64Method(
    MySimpleParamSimpleQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MySimpleParamSimpleQualsMethodsClass* instanceName,
    const MySimpleParamSimpleQualsMethodsClass_Sint64Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Invoke_Real32Method(
    MySimpleParamSimpleQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MySimpleParamSimpleQualsMethodsClass* instanceName,
    const MySimpleParamSimpleQualsMethodsClass_Real32Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Invoke_Real64Method(
    MySimpleParamSimpleQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MySimpleParamSimpleQualsMethodsClass* instanceName,
    const MySimpleParamSimpleQualsMethodsClass_Real64Method* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MySimpleParamSimpleQualsMethodsClass_Invoke_DatetimeMethod(
    MySimpleParamSimpleQualsMethodsClass_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MySimpleParamSimpleQualsMethodsClass* instanceName,
    const MySimpleParamSimpleQualsMethodsClass_DatetimeMethod* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

