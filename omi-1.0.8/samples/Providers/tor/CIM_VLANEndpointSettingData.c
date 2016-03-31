/* @migen@ */
#include <MI.h>
#include "CIM_VLANEndpointSettingData.h"

#define MAX_Vlan_NUM 4000
char stVlanEndPointSetData[MAX_Vlan_NUM][30];

void MI_CALL CIM_VLANEndpointSettingData_Load(
    CIM_VLANEndpointSettingData_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_VLANEndpointSettingData_Unload(
    CIM_VLANEndpointSettingData_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_VLANEndpointSettingData_EnumerateInstances(
    CIM_VLANEndpointSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VLANEndpointSettingData_GetInstance(
    CIM_VLANEndpointSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpointSettingData* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VLANEndpointSettingData_CreateInstance(
    CIM_VLANEndpointSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpointSettingData* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VLANEndpointSettingData_ModifyInstance(
    CIM_VLANEndpointSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpointSettingData* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    CIM_VLANEndpointSettingData stVLanEndPointData;
     
    CIM_VLANEndpointSettingData_Construct(&stVLanEndPointData, context);

    CIM_VLANEndpointSettingData_Set_InstanceID(&stVLanEndPointData, modifiedInstance->InstanceID.value);      

    if(modifiedInstance->AccessVLAN.exists)
    {
        CIM_VLANEndpointSettingData_Set_AccessVLAN(&stVLanEndPointData, modifiedInstance->AccessVLAN.value);
        /*临时记录下修改的vlan属性，待后续netconf实现*/
        if(modifiedInstance->InstanceID.exists)
            memcmp(stVlanEndPointSetData[modifiedInstance->AccessVLAN.value], modifiedInstance->InstanceID.value, strlen(modifiedInstance->InstanceID.value+1));       
    }

    if(modifiedInstance->TrunkedVLANList.exists)
    {
        CIM_VLANEndpointSettingData_Set_TrunkedVLANList(&stVLanEndPointData, modifiedInstance->TrunkedVLANList.value.data, modifiedInstance->TrunkedVLANList.value.size);
    }

    CIM_VLANEndpointSettingData_Post(&stVLanEndPointData, context);              

    CIM_VLANEndpointSettingData_Destruct(&stVLanEndPointData);    
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_VLANEndpointSettingData_DeleteInstance(
    CIM_VLANEndpointSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpointSettingData* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

