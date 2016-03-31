/* @migen@ */
#include <MI.h>
#include "CIM_ComRegProf.h"

void MI_CALL CIM_ComRegProf_Load(
    CIM_ComRegProf_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_ComRegProf_Unload(
    CIM_ComRegProf_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_ComRegProf_EnumerateInstances(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_ComRegProf_GetInstance(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComRegProf* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_ComRegProf_CreateInstance(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComRegProf* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_ComRegProf_ModifyInstance(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComRegProf* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_ComRegProf_DeleteInstance(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComRegProf* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_ComRegProf_AssociatorInstancesLeft(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisteredProfile* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    CIM_ComputerSystem stComputerSystem;

    CIM_ComputerSystem_Construct(&stComputerSystem, context);
    CIM_ComputerSystem_SetPtr_Name(&stComputerSystem, MI_T("SDN2"));
    CIM_ComputerSystem_SetPtr_CreationClassName(&stComputerSystem, MI_T("LINUX"));

    CIM_ComputerSystem_Post(&stComputerSystem, context);

    CIM_ComputerSystem_Destruct(&stComputerSystem);

    MI_Context_PostResult(context, MI_RESULT_OK);

}

void MI_CALL CIM_ComRegProf_AssociatorInstancesRight(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComputerSystem* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_ComRegProf_ReferenceInstancesLeft(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisteredProfile* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_ComRegProf_ReferenceInstancesRight(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComputerSystem* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

