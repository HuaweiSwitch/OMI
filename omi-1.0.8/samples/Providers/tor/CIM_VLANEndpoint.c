/* @migen@ */
#include <MI.h>
#include "CIM_VLANEndpoint.h"

void MI_CALL CIM_VLANEndpoint_Load(
    CIM_VLANEndpoint_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_VLANEndpoint_Unload(
    CIM_VLANEndpoint_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_VLANEndpoint_EnumerateInstances(
    CIM_VLANEndpoint_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VLANEndpoint_GetInstance(
    CIM_VLANEndpoint_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpoint* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VLANEndpoint_CreateInstance(
    CIM_VLANEndpoint_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpoint* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VLANEndpoint_ModifyInstance(
    CIM_VLANEndpoint_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpoint* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VLANEndpoint_DeleteInstance(
    CIM_VLANEndpoint_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpoint* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VLANEndpoint_Invoke_RequestStateChange(
    CIM_VLANEndpoint_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const CIM_VLANEndpoint* instanceName,
    const CIM_VLANEndpoint_RequestStateChange* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

