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
#include "XYZ_Frog.h"

void MI_CALL XYZ_Frog_Load(
    XYZ_Frog_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL XYZ_Frog_Unload(
    XYZ_Frog_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL XYZ_Frog_EnumerateInstances(
    XYZ_Frog_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    XYZ_Frog frog1;
    XYZ_Frog_Construct(&frog1, context);
    XYZ_Frog_Set_Name(&frog1, MI_T("Fred"));
    XYZ_Frog_Set_Weight(&frog1, 55);
    XYZ_Frog_Set_Color(&frog1, MI_T("Blue"));
    XYZ_Frog_Post(&frog1, context);
    XYZ_Frog_Destruct(&frog1);

    XYZ_Frog frog2;
    XYZ_Frog_Construct(&frog2, context);
    XYZ_Frog_Set_Name(&frog2, MI_T("Sam"));
    XYZ_Frog_Set_Weight(&frog2, 55);
    XYZ_Frog_Set_Color(&frog2, MI_T("Blue"));
    XYZ_Frog_Post(&frog2, context);
    XYZ_Frog_Destruct(&frog2);

    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL XYZ_Frog_GetInstance(
    XYZ_Frog_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const XYZ_Frog* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL XYZ_Frog_CreateInstance(
    XYZ_Frog_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const XYZ_Frog* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL XYZ_Frog_ModifyInstance(
    XYZ_Frog_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const XYZ_Frog* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL XYZ_Frog_DeleteInstance(
    XYZ_Frog_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const XYZ_Frog* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

