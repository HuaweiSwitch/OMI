/* @migen@ */
#include <MI.h>
#include "CIM_LANEndpoint.h"

void MI_CALL CIM_LANEndpoint_Load(
    CIM_LANEndpoint_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_LANEndpoint_Unload(
    CIM_LANEndpoint_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_LANEndpoint_EnumerateInstances(
    CIM_LANEndpoint_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_LANEndpoint_GetInstance(
    CIM_LANEndpoint_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndpoint* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_LANEndpoint_CreateInstance(
    CIM_LANEndpoint_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndpoint* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_LANEndpoint_ModifyInstance(
    CIM_LANEndpoint_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndpoint* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_LANEndpoint_DeleteInstance(
    CIM_LANEndpoint_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndpoint* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_LANEndpoint_Invoke_RequestStateChange(
    CIM_LANEndpoint_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const CIM_LANEndpoint* instanceName,
    const CIM_LANEndpoint_RequestStateChange* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

