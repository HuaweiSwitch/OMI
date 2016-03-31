/* @migen@ */
#include <MI.h>
#include "MSFT_GlobalEthernetSwitchSettingData.h"

extern MSFT_GlobalEthernetSwitchSettingData stGlobalSetting;

void MI_CALL MSFT_GlobalEthernetSwitchSettingData_Load(
    MSFT_GlobalEthernetSwitchSettingData_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_GlobalEthernetSwitchSettingData_Unload(
    MSFT_GlobalEthernetSwitchSettingData_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_GlobalEthernetSwitchSettingData_EnumerateInstances(
    MSFT_GlobalEthernetSwitchSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_GlobalEthernetSwitchSettingData_GetInstance(
    MSFT_GlobalEthernetSwitchSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_GlobalEthernetSwitchSettingData* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_GlobalEthernetSwitchSettingData_CreateInstance(
    MSFT_GlobalEthernetSwitchSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_GlobalEthernetSwitchSettingData* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_GlobalEthernetSwitchSettingData_ModifyInstance(
    MSFT_GlobalEthernetSwitchSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_GlobalEthernetSwitchSettingData* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    if(modifiedInstance->BannerIsEnabled.exists)
    {
        MSFT_GlobalEthernetSwitchSettingData_Set_BannerIsEnabled(&stGlobalSetting, modifiedInstance->BannerIsEnabled.value);
    }

    if(modifiedInstance->Banner.exists)
    {
        MSFT_GlobalEthernetSwitchSettingData_Set_Banner(&stGlobalSetting, modifiedInstance->Banner.value);
    }

    MSFT_GlobalEthernetSwitchSettingData_Post(&stGlobalSetting, context);
    
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_GlobalEthernetSwitchSettingData_DeleteInstance(
    MSFT_GlobalEthernetSwitchSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_GlobalEthernetSwitchSettingData* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

