/* @migen@ */
#include <MI.h>
#include "CIM_LANEndAssociationVlanEnd.h"

void MI_CALL CIM_LANEndAssociationVlanEnd_Load(
    CIM_LANEndAssociationVlanEnd_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_LANEndAssociationVlanEnd_Unload(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_LANEndAssociationVlanEnd_EnumerateInstances(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_LANEndAssociationVlanEnd_GetInstance(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndAssociationVlanEnd* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_LANEndAssociationVlanEnd_CreateInstance(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndAssociationVlanEnd* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_LANEndAssociationVlanEnd_ModifyInstance(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndAssociationVlanEnd* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_LANEndAssociationVlanEnd_DeleteInstance(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndAssociationVlanEnd* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_LANEndAssociationVlanEnd_AssociatorInstancesLeft(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_LANEndpoint* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    CIM_VLANEndpoint stVLanEndPoint;
     
    CIM_VLANEndpoint_Construct(&stVLanEndPoint, context);

    CIM_VLANEndpoint_Set_Name(&stVLanEndPoint, instanceName->Name.value);        
    CIM_VLANEndpoint_Set_SystemCreationClassName(&stVLanEndPoint, instanceName->SystemCreationClassName.value);        
    CIM_VLANEndpoint_Set_SystemName(&stVLanEndPoint, instanceName->SystemName.value);        
    CIM_VLANEndpoint_Set_CreationClassName(&stVLanEndPoint, instanceName->CreationClassName.value);        

    CIM_VLANEndpoint_Post(&stVLanEndPoint, context);

    CIM_VLANEndpoint_Destruct(&stVLanEndPoint);    
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_LANEndAssociationVlanEnd_AssociatorInstancesRight(
    CIM_LANEndAssociationVlanEnd_Self* self,
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

void MI_CALL CIM_LANEndAssociationVlanEnd_ReferenceInstancesLeft(
    CIM_LANEndAssociationVlanEnd_Self* self,
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

void MI_CALL CIM_LANEndAssociationVlanEnd_ReferenceInstancesRight(
    CIM_LANEndAssociationVlanEnd_Self* self,
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

