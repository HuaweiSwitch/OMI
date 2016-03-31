/* @migen@ */
#include <MI.h>
#include "CIM_EthPortAssocationData.h"

#define MAX_EthernetPort_NUM 100
CIM_EthernetPortAllocationSettingData stEthPortAllocData[MAX_EthernetPort_NUM];
extern MSFT_EthernetPort stEthPort[MAX_EthernetPort_NUM];

void MI_CALL CIM_EthPortAssocationData_Load(
    CIM_EthPortAssocationData_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    int i = 0;
    char cInstanceIDBuf[20] = {0};

    for(;i < MAX_EthernetPort_NUM; i++)
    {
        CIM_EthernetPortAllocationSettingData_Construct(&stEthPortAllocData[i], context);

        sprintf(cInstanceIDBuf, "InstanceID:%d", i);
        CIM_EthernetPortAllocationSettingData_Set_InstanceID(&stEthPortAllocData[i], cInstanceIDBuf);        
    }

    
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_EthPortAssocationData_Unload(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context)
{
    int i = 0;

    for(;i < MAX_EthernetPort_NUM; i++)
    {
        CIM_EthernetPortAllocationSettingData_Destruct(&stEthPortAllocData[i]);
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_EthPortAssocationData_EnumerateInstances(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_EthPortAssocationData_GetInstance(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssocationData* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_EthPortAssocationData_CreateInstance(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssocationData* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_EthPortAssocationData_ModifyInstance(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssocationData* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_EthPortAssocationData_DeleteInstance(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthPortAssocationData* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_EthPortAssocationData_AssociatorInstancesLeft(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_EthernetPort* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    int i = 0;

    //:TODO:先固定写死，后续实现把两个class的instance一一对应

    /*通过port的device与instance id相关联起来*/
    CIM_EthernetPortAllocationSettingData_Set_InstanceID(&stEthPortAllocData[i], instanceName->DeviceID.value);        

    CIM_EthernetPortAllocationSettingData_Post(&stEthPortAllocData[i], context);
    MI_Context_PostResult(context, MI_RESULT_OK);
 
    //MI_Context_PostResult(context, MI_RESULT_NOT_FOUND);
}

void MI_CALL CIM_EthPortAssocationData_AssociatorInstancesRight(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthernetPortAllocationSettingData* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    int i = 0;
    int flag = 0;
    
    for(; i < MAX_EthernetPort_NUM; i++)
    {
        if(!memcmp(instanceName->InstanceID.value, stEthPortAllocData[i].InstanceID.value, strlen(instanceName->InstanceID.value)+1))
        {
            MSFT_EthernetPort_Post(&stEthPort[i], context);
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        MI_Context_PostResult(context, MI_RESULT_OK);  
    else
        MI_Context_PostResult(context, MI_RESULT_NOT_FOUND);
 
}

void MI_CALL CIM_EthPortAssocationData_ReferenceInstancesLeft(
    CIM_EthPortAssocationData_Self* self,
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

void MI_CALL CIM_EthPortAssocationData_ReferenceInstancesRight(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthernetPortAllocationSettingData* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

