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
#include "MyDerivedClassOfRestrictedQualsOnBaseElements.h"

void MI_CALL MyDerivedClassOfRestrictedQualsOnBaseElements_Load(
    MyDerivedClassOfRestrictedQualsOnBaseElements_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MyDerivedClassOfRestrictedQualsOnBaseElements_Unload(
    MyDerivedClassOfRestrictedQualsOnBaseElements_Self* self,
    MI_Context* context)
{
    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MyDerivedClassOfRestrictedQualsOnBaseElements_Invoke_myMethod(
    MyDerivedClassOfRestrictedQualsOnBaseElements_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MyDerivedClassOfRestrictedQualsOnBaseElements* instanceName,
    const MyDerivedClassOfRestrictedQualsOnBaseElements_myMethod* in)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

