/* @migen@ */
#include <MI.h>
#include "CIM_MACTableAssociationEntry.h"

void MI_CALL CIM_MACTableAssociationEntry_Load(
    CIM_MACTableAssociationEntry_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_MACTableAssociationEntry_Unload(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_MACTableAssociationEntry_EnumerateInstances(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_MACTableAssociationEntry_GetInstance(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_MACTableAssociationEntry* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_MACTableAssociationEntry_CreateInstance(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_MACTableAssociationEntry* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_MACTableAssociationEntry_ModifyInstance(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_MACTableAssociationEntry* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_MACTableAssociationEntry_DeleteInstance(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_MACTableAssociationEntry* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_MACTableAssociationEntry_AssociatorInstancesLeft(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTable* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MSFT_MACTableEntry stMacEntry;
    int i = 0;
    char str[12] = {0};

    for(; i < 10; i++)/*先固定写死，待netconf实现*/
    {
        MSFT_MACTableEntry_Construct(&stMacEntry, context);
        sprintf(str, "00000100430%d", i);/*先固定写死，待netconf实现*/
        MSFT_MACTableEntry_Set_InstanceID(&stMacEntry, str);
        MSFT_MACTableEntry_Set_MACAddress(&stMacEntry, str);
        /*只要求返回动态macx需要过滤掉静态mac*/
        MSFT_MACTableEntry_Set_EntryType(&stMacEntry, 3);/*表示动态mac*/       
        MSFT_MACTableEntry_Post(&stMacEntry, context);
        MSFT_MACTableEntry_Destruct(&stMacEntry);        
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_MACTableAssociationEntry_AssociatorInstancesRight(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTableEntry* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_MACTableAssociationEntry_ReferenceInstancesLeft(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTable* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_MACTableAssociationEntry_ReferenceInstancesRight(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_MACTableEntry* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

