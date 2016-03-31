/* @migen@ */
#include <MI.h>
#include "CIM_EthernetPortAllocationSettingData.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "messages.h"

#define MAX_EthernetPort_NUM 100
extern CIM_EthernetPortAllocationSettingData stEthPortAllocData[MAX_EthernetPort_NUM];

void MI_CALL CIM_EthernetPortAllocationSettingData_Load(
    CIM_EthernetPortAllocationSettingData_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_EthernetPortAllocationSettingData_Unload(
    CIM_EthernetPortAllocationSettingData_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_EthernetPortAllocationSettingData_EnumerateInstances(
    CIM_EthernetPortAllocationSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_EthernetPortAllocationSettingData_GetInstance(
    CIM_EthernetPortAllocationSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthernetPortAllocationSettingData* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_EthernetPortAllocationSettingData_CreateInstance(
    CIM_EthernetPortAllocationSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthernetPortAllocationSettingData* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_EthernetPortAllocationSettingData_ModifyInstance(
    CIM_EthernetPortAllocationSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthernetPortAllocationSettingData* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    int i = 0;
    int flag = 0;

    int a = 0;               
    nc_rpc *rpc = NULL;               
    nc_reply* reply = NULL;               
    NC_REPLY_TYPE reply_type;                 
    char  data[50000] = {0};            
    char  send_data_1[1000] = {0};          
    char  *send_point = send_data_1; 
    char  send_data[1000] ="";

    for(; i < MAX_EthernetPort_NUM; i++)
    {
        if(!memcmp(modifiedInstance->InstanceID.value, stEthPortAllocData[i].InstanceID.value, strlen(modifiedInstance->InstanceID.value)+1))
        {
             if(modifiedInstance->DesiredVLANEndpointMode.exists == 1)
             {

                 if(5 == modifiedInstance->DesiredVLANEndpointMode.value)
                 {
                    sprintf(send_data, "<edit-config><target><running/></target><default-operation>merge</default-operation><error-option>rollback-on-error</error-option><config><ethernet xmlns=\"http://www.huawei.com/netconf/vrp\"content-version=\"1.0\" format-version=\"1.0\"><ethernetIfs><ethernetIf operation=\"merge\"><ifName>%s</ifName><l2Attribute><linkType>trunk</linkType></l2Attribute></ethernetIf></ethernetIfs></ethernet></config></edit-config>",modifiedInstance->InstanceID.value);
                 }
                 else
                 {
                    sprintf(send_data, "<edit-config><target><running/></target><default-operation>merge</default-operation><error-option>rollback-on-error</error-option><config><ethernet xmlns=\"http://www.huawei.com/netconf/vrp\"content-version=\"1.0\" format-version=\"1.0\"><ethernetIfs><ethernetIf operation=\"merge\"><ifName>%s</ifName><l2Attribute><linkType>access</linkType></l2Attribute></ethernetIf></ethernetIfs></ethernet></config></edit-config>",modifiedInstance->InstanceID.value);
                 }

                 rpc = nc_rpc_generic(send_data);            
                 send_point = nc_rpc_dump(rpc);              	
                 a = nc_session_send_recv(context->reserved[0], rpc, &reply);  
                 if(a != NC_MSG_REPLY)
                 {
                     context->reserved[0] = NULL;
                     return -1;
                 }
                 
                 nc_rpc_free(rpc);        
                 nc_reply_free(reply); 


                 CIM_EthernetPortAllocationSettingData_Set_DesiredVLANEndpointMode(&stEthPortAllocData[i], modifiedInstance->DesiredVLANEndpointMode.value);
                 CIM_EthernetPortAllocationSettingData_Post(&stEthPortAllocData[i], context);   
                 flag = 1;
                 break;
             }
        }
    }

    if(flag == 1)
        MI_Context_PostResult(context, MI_RESULT_OK);
    else
        MI_Context_PostResult(context, MI_RESULT_NOT_FOUND);

}

void MI_CALL CIM_EthernetPortAllocationSettingData_DeleteInstance(
    CIM_EthernetPortAllocationSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthernetPortAllocationSettingData* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

