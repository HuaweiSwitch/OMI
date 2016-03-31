/* @migen@ */
#include <MI.h>
#include "CIM_RegisteredProfile.h"

void MI_CALL CIM_RegisteredProfile_Load(
    CIM_RegisteredProfile_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_RegisteredProfile_Unload(
    CIM_RegisteredProfile_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_RegisteredProfile_EnumerateInstances(
    CIM_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    CIM_RegisteredProfile stRegProf = {0};

    CIM_RegisteredProfile_Construct(&stRegProf, context);

    CIM_RegisteredProfile_Set_InstanceID(&stRegProf, MI_T("1"));
    CIM_RegisteredProfile_SetPtr_RegisteredName(&stRegProf, MI_T("Ethernet Switch Profile"));
    CIM_RegisteredProfile_SetPtr_RegisteredVersion(&stRegProf, MI_T("1.0"));
    CIM_RegisteredProfile_Set_RegisteredOrganization(&stRegProf, 1);    

    CIM_RegisteredProfile_Post(&stRegProf, context);

    CIM_RegisteredProfile_Set_InstanceID(&stRegProf, MI_T("2"));
    CIM_RegisteredProfile_SetPtr_RegisteredName(&stRegProf, MI_T("Physical Computer System View"));
    CIM_RegisteredProfile_SetPtr_RegisteredVersion(&stRegProf, MI_T("1.0"));
    CIM_RegisteredProfile_Set_RegisteredOrganization(&stRegProf, 2);    

    CIM_RegisteredProfile_Post(&stRegProf, context);

    CIM_RegisteredProfile_Destruct(&stRegProf);

    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_RegisteredProfile_GetInstance(
    CIM_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisteredProfile* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_RegisteredProfile_CreateInstance(
    CIM_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisteredProfile* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_RegisteredProfile_ModifyInstance(
    CIM_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisteredProfile* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_RegisteredProfile_DeleteInstance(
    CIM_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisteredProfile* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_RegisteredProfile_Invoke_CloseConformantInstances(
    CIM_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const CIM_RegisteredProfile* instanceName,
    const CIM_RegisteredProfile_CloseConformantInstances* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_RegisteredProfile_Invoke_OpenConformantInstances(
    CIM_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const CIM_RegisteredProfile* instanceName,
    const CIM_RegisteredProfile_OpenConformantInstances* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_RegisteredProfile_Invoke_PullConformantInstances(
    CIM_RegisteredProfile_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const CIM_RegisteredProfile* instanceName,
    const CIM_RegisteredProfile_PullConformantInstances* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

