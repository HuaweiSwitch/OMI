/* @migen@ */
#include <MI.h>
#include "CIM_RegisterProfileAssociationPhyComputerSys.h"

void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_Load(
    CIM_RegisterProfileAssociationPhyComputerSys_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_Unload(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_EnumerateInstances(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_GetInstance(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisterProfileAssociationPhyComputerSys* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_CreateInstance(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisterProfileAssociationPhyComputerSys* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_ModifyInstance(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisterProfileAssociationPhyComputerSys* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_DeleteInstance(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisterProfileAssociationPhyComputerSys* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_AssociatorInstancesLeft(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisteredProfile* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    CIM_PhysicalComputerSystemView stPhyComputerSys;

    CIM_PhysicalComputerSystemView_Construct(&stPhyComputerSys, context);

    CIM_PhysicalComputerSystemView_Set_InstanceID(&stPhyComputerSys, MI_T("1234567890"));
    CIM_PhysicalComputerSystemView_Set_Manufacturer(&stPhyComputerSys, MI_T("CE"));
    CIM_PhysicalComputerSystemView_Set_Model(&stPhyComputerSys, MI_T("CENTOS"));
    CIM_PhysicalComputerSystemView_Set_OSVersion(&stPhyComputerSys, MI_T("1.0.8"));
    
    CIM_PhysicalComputerSystemView_Post(&stPhyComputerSys, context);

    CIM_PhysicalComputerSystemView_Destruct(&stPhyComputerSys);
    
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_AssociatorInstancesRight(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_PhysicalComputerSystemView* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_ReferenceInstancesLeft(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
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

void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_ReferenceInstancesRight(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_PhysicalComputerSystemView* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

