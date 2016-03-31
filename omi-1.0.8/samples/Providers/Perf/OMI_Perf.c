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
#include "OMI_Perf.h"

void MI_CALL OMI_Perf_Load(
    OMI_Perf_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL OMI_Perf_Unload(
    OMI_Perf_Self* self,
    MI_Context* context)
{
    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL OMI_Perf_EnumerateInstances(
    OMI_Perf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    OMI_Perf inst;
    MI_Uint32 i;

    OMI_Perf_Construct(&inst, context);

    OMI_Perf_Set_Prop01(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop02(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop03(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop04(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop05(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop06(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop07(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop08(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop09(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop10(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop11(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop12(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop13(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop14(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop15(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop16(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop17(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop18(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop19(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
    OMI_Perf_Set_Prop20(&inst, MI_T("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));

    for (i = 0; i < 1000000; i++)
    {
        OMI_Perf_Set_Key(&inst, i);
        OMI_Perf_Post(&inst, context);
    }

    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL OMI_Perf_GetInstance(
    OMI_Perf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const OMI_Perf* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL OMI_Perf_CreateInstance(
    OMI_Perf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const OMI_Perf* newInstance)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL OMI_Perf_ModifyInstance(
    OMI_Perf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const OMI_Perf* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL OMI_Perf_DeleteInstance(
    OMI_Perf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const OMI_Perf* instanceName)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

