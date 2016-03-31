/* @migen@ */
#include <MI.h>
#include "CIM_EthPortAssociationLANEnd.h"

void MI_CALL CIM_EthPortAssociationLANEnd_Load(
    CIM_EthPortAssociationLANEnd_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_EthPortAssociationLANEnd_Unload(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_EthPortAssociationLANEnd_EnumerateInstances(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_EthPortAssociationLANEnd_GetInstance(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssociationLANEnd* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_EthPortAssociationLANEnd_CreateInstance(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssociationLANEnd* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_EthPortAssociationLANEnd_ModifyInstance(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssociationLANEnd* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_EthPortAssociationLANEnd_DeleteInstance(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssociationLANEnd* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_EthPortAssociationLANEnd_AssociatorInstancesLeft(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_EthernetPort* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    CIM_LANEndpoint stLanEndPoint;
     
    CIM_LANEndpoint_Construct(&stLanEndPoint, context);

    CIM_LANEndpoint_Set_Name(&stLanEndPoint, instanceName->DeviceID.value);        
    CIM_LANEndpoint_Set_SystemCreationClassName(&stLanEndPoint, instanceName->SystemCreationClassName.value);        
    CIM_LANEndpoint_Set_SystemName(&stLanEndPoint, instanceName->SystemName.value);        
    CIM_LANEndpoint_Set_CreationClassName(&stLanEndPoint, instanceName->CreationClassName.value);        

    CIM_LANEndpoint_Post(&stLanEndPoint, context);

    CIM_LANEndpoint_Destruct(&stLanEndPoint);    
    MI_Context_PostResult(context, MI_RESULT_OK);
 
}

void MI_CALL CIM_EthPortAssociationLANEnd_AssociatorInstancesRight(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndpoint* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_EthPortAssociationLANEnd_ReferenceInstancesLeft(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_EthernetPort* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_EthPortAssociationLANEnd_ReferenceInstancesRight(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndpoint* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

