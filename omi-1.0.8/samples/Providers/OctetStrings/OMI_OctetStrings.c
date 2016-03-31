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
#include "OMI_OctetStrings.h"

void MI_CALL OMI_OctetStrings_Load(
    OMI_OctetStrings_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL OMI_OctetStrings_Unload(
    OMI_OctetStrings_Self* self,
    MI_Context* context)
{
    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL OMI_OctetStrings_EnumerateInstances(
    OMI_OctetStrings_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    OMI_OctetStrings inst;
    OMI_OctetStrings_Construct(&inst, context);
    OMI_OctetStrings_Set_Key(&inst, "OMI_OctetStrings.1");

    {
        MI_Uint8 data[] = { 0, 0, 0, 9, 'h', 'e', 'l', 'l', 'o', };
        OMI_OctetStrings_Set_Data1(&inst, data, MI_COUNT(data));
    }

    OMI_OctetStrings_Set_Str(&inst, " &\'\"><");

    OMI_OctetStrings_Post(&inst, context);


    MI_PostResult(context, MI_RESULT_OK);
}

void MI_CALL OMI_OctetStrings_GetInstance(
    OMI_OctetStrings_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const OMI_OctetStrings* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL OMI_OctetStrings_CreateInstance(
    OMI_OctetStrings_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const OMI_OctetStrings* newInstance)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL OMI_OctetStrings_ModifyInstance(
    OMI_OctetStrings_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const OMI_OctetStrings* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL OMI_OctetStrings_DeleteInstance(
    OMI_OctetStrings_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const OMI_OctetStrings* instanceName)
{
    MI_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

