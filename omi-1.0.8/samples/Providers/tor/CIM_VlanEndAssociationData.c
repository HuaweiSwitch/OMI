/* @migen@ */
#include <MI.h>
#include "CIM_VlanEndAssociationData.h"

#include "CIM_EthernetPortAllocationSettingData.h"
#define MAX_EthernetPort_NUM 100
extern CIM_EthernetPortAllocationSettingData stEthPortAllocData[MAX_EthernetPort_NUM];

void MI_CALL CIM_VlanEndAssociationData_Load(
    CIM_VlanEndAssociationData_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_VlanEndAssociationData_Unload(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_VlanEndAssociationData_EnumerateInstances(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VlanEndAssociationData_GetInstance(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanEndAssociationData* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VlanEndAssociationData_CreateInstance(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanEndAssociationData* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VlanEndAssociationData_ModifyInstance(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanEndAssociationData* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VlanEndAssociationData_DeleteInstance(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanEndAssociationData* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VlanEndAssociationData_AssociatorInstancesLeft(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpoint* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    int i = 0;
    CIM_VLANEndpointSettingData stVLanEndPointData;
     
    CIM_VLANEndpointSettingData_Construct(&stVLanEndPointData, context);

    /*接收到对应的port name*/
    CIM_VLANEndpointSettingData_Set_InstanceID(&stVLanEndPointData, instanceName->Name.value);        

    /*根据port name遍历EthernetPortAllocationSettingData，取到后获取其中的DesiredVLANEndpointMode*/
    for(; i < MAX_EthernetPort_NUM; i++)
    {
        if(!memcmp(instanceName->Name.value, stEthPortAllocData[i].InstanceID.value, strlen(instanceName->Name.value)+1))
        {
             if(stEthPortAllocData[i].DesiredVLANEndpointMode.exists)
             {
                 switch(stEthPortAllocData[i].DesiredVLANEndpointMode.value)
                 {
                     case 2:         
                     CIM_VLANEndpointSettingData_Set_AccessVLAN(&stVLanEndPointData,  0);/*后面的值应该用实际的vlan值,暂时写死为0*/                     
                     break;

                     case 5:
                     CIM_VLANEndpointSettingData_Set_NativeVLAN(&stVLanEndPointData,  0);/*后面的值应该用实际的vlan值,暂时写死为0*/                         
                     break;   

                     default:
                     break;
                 }                 
             }

             CIM_VLANEndpointSettingData_Post(&stVLanEndPointData, context);              
        }
    }

    CIM_VLANEndpointSettingData_Destruct(&stVLanEndPointData);    
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_VlanEndAssociationData_AssociatorInstancesRight(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpointSettingData* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VlanEndAssociationData_ReferenceInstancesLeft(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpoint* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VlanEndAssociationData_ReferenceInstancesRight(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpointSettingData* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

