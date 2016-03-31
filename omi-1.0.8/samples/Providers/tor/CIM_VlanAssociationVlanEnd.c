/* @migen@ */
#include <MI.h>
#include "CIM_VlanAssociationVlanEnd.h"

#define MAX_Vlan_NUM 4000
extern char stVlanEndPointSetData[MAX_Vlan_NUM][30];

void MI_CALL CIM_VlanAssociationVlanEnd_Load(
    CIM_VlanAssociationVlanEnd_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_VlanAssociationVlanEnd_Unload(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_VlanAssociationVlanEnd_EnumerateInstances(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VlanAssociationVlanEnd_GetInstance(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanAssociationVlanEnd* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VlanAssociationVlanEnd_CreateInstance(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanAssociationVlanEnd* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VlanAssociationVlanEnd_ModifyInstance(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanAssociationVlanEnd* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VlanAssociationVlanEnd_DeleteInstance(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanAssociationVlanEnd* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VlanAssociationVlanEnd_AssociatorInstancesLeft(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_NetworkVLAN* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    CIM_VLANEndpoint stVlanEndPoint;
    int vlanid = 0;

    CIM_VLANEndpoint_Construct(&stVlanEndPoint, context);

   vlanid = *instanceName->InstanceID.value - '0';/*临时方案*/
    
    /*待后续netconf实现*/
    CIM_VLANEndpoint_Set_Name(&stVlanEndPoint,  stVlanEndPointSetData[vlanid]);
    CIM_VLANEndpoint_Set_SystemCreationClassName(&stVlanEndPoint, MI_T("DEVM"));        
    CIM_VLANEndpoint_Set_SystemName(&stVlanEndPoint, MI_T("SDN2"));        
    CIM_VLANEndpoint_Set_CreationClassName(&stVlanEndPoint, MI_T("PHYCIAL"));        

    CIM_VLANEndpoint_Post(&stVlanEndPoint, context); 
        
    CIM_VLANEndpoint_Destruct(&stVlanEndPoint);    

    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_VlanAssociationVlanEnd_AssociatorInstancesRight(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpoint* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VlanAssociationVlanEnd_ReferenceInstancesLeft(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_NetworkVLAN* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_VlanAssociationVlanEnd_ReferenceInstancesRight(
    CIM_VlanAssociationVlanEnd_Self* self,
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

