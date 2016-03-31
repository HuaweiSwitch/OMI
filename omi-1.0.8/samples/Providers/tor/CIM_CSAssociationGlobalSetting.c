/* @migen@ */
#include <MI.h>
#include "CIM_CSAssociationGlobalSetting.h"

MSFT_GlobalEthernetSwitchSettingData stGlobalSetting;

void MI_CALL CIM_CSAssociationGlobalSetting_Load(
    CIM_CSAssociationGlobalSetting_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;

    MSFT_GlobalEthernetSwitchSettingData_Construct(&stGlobalSetting, context);

    MSFT_GlobalEthernetSwitchSettingData_Set_InstanceID(&stGlobalSetting, MI_T("Computer System Global Setting"));
    
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_CSAssociationGlobalSetting_Unload(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context)
{
    MSFT_GlobalEthernetSwitchSettingData_Destruct(&stGlobalSetting);

    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_CSAssociationGlobalSetting_EnumerateInstances(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_CSAssociationGlobalSetting_GetInstance(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_CSAssociationGlobalSetting* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_CSAssociationGlobalSetting_CreateInstance(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_CSAssociationGlobalSetting* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_CSAssociationGlobalSetting_ModifyInstance(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_CSAssociationGlobalSetting* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_CSAssociationGlobalSetting_DeleteInstance(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_CSAssociationGlobalSetting* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_CSAssociationGlobalSetting_AssociatorInstancesLeft(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComputerSystem* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{

    MSFT_GlobalEthernetSwitchSettingData_Post(&stGlobalSetting, context);

    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_CSAssociationGlobalSetting_AssociatorInstancesRight(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_GlobalEthernetSwitchSettingData* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_CSAssociationGlobalSetting_ReferenceInstancesLeft(
    CIM_CSAssociationGlobalSetting_Self* self,
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

void MI_CALL CIM_CSAssociationGlobalSetting_ReferenceInstancesRight(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_GlobalEthernetSwitchSettingData* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

