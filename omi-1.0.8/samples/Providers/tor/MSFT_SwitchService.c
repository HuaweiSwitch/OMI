/* @migen@ */
#include <MI.h>
#include "MSFT_SwitchService.h"

#include <stdlib.h>

//#include "libnetconf.h"
#include <string.h>

#include "messages.h"
#include "stdio.h"
#define MAX_Vlan_NUM 4000
MSFT_NetworkVLAN stVlanConfig[MAX_Vlan_NUM];
MSFT_NetworkVLAN stVlanConfigStartup[MAX_Vlan_NUM];

void MI_CALL MSFT_SwitchService_Load(
    MSFT_SwitchService_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;

    int i = 0;

    for(; i < MAX_Vlan_NUM; i++)
    {
        MSFT_NetworkVLAN_Construct(&stVlanConfig[i], context);
    }
    
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_SwitchService_Unload(
    MSFT_SwitchService_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_SwitchService_EnumerateInstances(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    MSFT_SwitchService stSwitchService;

    MSFT_SwitchService_Construct(&stSwitchService, context);

    MSFT_SwitchService_Set_Name(&stSwitchService, MI_T("TOR"));
    MSFT_SwitchService_Set_SystemCreationClassName(&stSwitchService, MI_T("DEVM"));
    MSFT_SwitchService_Set_SystemName(&stSwitchService, MI_T("SDN2"));
    MSFT_SwitchService_Set_CreationClassName(&stSwitchService, MI_T("PHYCIAL"));

    MSFT_SwitchService_Post(&stSwitchService, context);

    MSFT_SwitchService_Destruct(&stSwitchService);

    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_SwitchService_GetInstance(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_SwitchService* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_CreateInstance(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_SwitchService* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_ModifyInstance(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_SwitchService* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_DeleteInstance(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_SwitchService* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_RequestStateChange(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_RequestStateChange* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_StartService(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_StartService* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_StopService(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_StopService* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_AddProtocolEndpoint(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_AddProtocolEndpoint* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_RemoveProtocolEndpoint(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_RemoveProtocolEndpoint* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_AddVLAN(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_AddVLAN* in)
{
    
    MSFT_SwitchService_AddVLAN out;
    MSFT_NetworkVLAN** stVlan = 0;
    int i = 0;
    int a = 0;                             
    nc_rpc *rpc = NULL;               
    nc_reply* reply = NULL;                         
    char  send_data_1[1000] = {0};          
    char  *send_point = send_data_1;           
    char  send_data[1000] =""; 
    
    stVlan = in->NetworkVLAN.value.data;
    
    for(; i <  in->NetworkVLAN.value.size; i++)
    {
        MSFT_NetworkVLAN_Set_VLANId(&stVlanConfig[stVlan[i]->VLANId.value], stVlan[i]->VLANId.value);
        sprintf(send_data, "<edit-config><target><running/></target><default-operation>merge</default-operation><error-option>rollback-on-error</error-option><config><vlan xmlns=\"http://www.huawei.com/netconf/vrp\"content-version=\"1.0\" format-version=\"1.0\"><vlans><vlan operation=\"create\"><vlanId>%d</vlanId><vlanName></vlanName><vlanDesc></vlanDesc><vlanType>common</vlanType><vlanif><cfgBand></cfgBand><dampTime></dampTime></vlanif></vlan></vlans></vlan></config></edit-config>",stVlan[i]->VLANId.value);	               

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
    }

    MSFT_SwitchService_AddVLAN_Construct(&out, context);

    MSFT_SwitchService_AddVLAN_Set_MIReturn(&out, 0);

    MSFT_SwitchService_AddVLAN_Set_VLAN(&out,  in->NetworkVLAN.value.data, in->NetworkVLAN.value.size);
    
    MSFT_SwitchService_AddVLAN_Post(&out, context);
    
    MSFT_SwitchService_AddVLAN_Destruct(&out);

    MI_PostResult(context, MI_RESULT_OK);        
}

void MI_CALL MSFT_SwitchService_Invoke_RemoveVLAN(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_RemoveVLAN* in)
{
    MSFT_SwitchService_RemoveVLAN out;
    MSFT_NetworkVLAN** stVlan = 0;
    int i = 0;
    int a = 0;                             
    nc_rpc *rpc = NULL;               
    nc_reply* reply = NULL;                         
    char  send_data_1[1000] = {0};          
    char  *send_point = send_data_1;           
    char  send_data[1000] =""; 
    int tmp = 0;
    
    stVlan = in->VLAN.value.data;
    
    /*待netconf提供接口后删除vlan*/
    for(; i < in->VLAN.value.size; i++)
    {
        tmp = atoi(stVlan[i]->InstanceID.value);        
        MSFT_NetworkVLAN_Construct(&stVlanConfig[tmp], context);/*construct能清楚所有信息?*/ 
                       
        sprintf(send_data, "<edit-config><target><running/></target><default-operation>merge</default-operation><error-option>rollback-on-error</error-option><config><vlan xmlns=\"http://www.huawei.com/netconf/vrp\"content-version=\"1.0\" format-version=\"1.0\"><vlans><vlan operation=\"delete\"><vlanId>%d</vlanId></vlan></vlans></vlan></config></edit-config>",tmp);
  
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
    }

    MSFT_SwitchService_RemoveVLAN_Construct(&out, context);

    MSFT_SwitchService_RemoveVLAN_Set_MIReturn(&out, 0);

    MSFT_SwitchService_RemoveVLAN_Clear_VLAN(&out);
    
    MSFT_SwitchService_RemoveVLAN_Post(&out, context);
    
    MSFT_SwitchService_RemoveVLAN_Destruct(&out);

    MI_PostResult(context, MI_RESULT_OK);        
}

void MI_CALL MSFT_SwitchService_Invoke_EnableVLAN(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_EnableVLAN* in)
{
    int i = 0;
    MSFT_NetworkVLAN** stVlan = 0;
    MSFT_SwitchService_EnableVLAN out;
    int tmp = 0;/*temp*/
    MSFT_NetworkVLAN stNetworkVlan;
    char chInstanceIDBuf[10] = {0};
    
    MSFT_NetworkVLAN_Construct(&stNetworkVlan, context);

    
    stVlan = in->VLAN.value.data;

    for(; i < in->VLAN.value.size; i++)
    {
        tmp = atoi(stVlan[i]->InstanceID.value);
        MSFT_NetworkVLAN_Set_IsEnabled(&stVlanConfig[tmp], 1);
        stVlanConfig[tmp].IsEnabled.value = 1;
    }

    MSFT_NetworkVLAN_Set_VLANId(&stNetworkVlan, tmp);
    MSFT_NetworkVLAN_Set_IsEnabled(&stNetworkVlan,  1);                               
    MSFT_NetworkVLAN_Post(&stNetworkVlan, context);

    MSFT_SwitchService_EnableVLAN_Construct(&out, context);

    MSFT_SwitchService_EnableVLAN_Set_MIReturn(&out, 0);
    
    MSFT_SwitchService_EnableVLAN_Post(&out, context);
    
    MSFT_SwitchService_EnableVLAN_Destruct(&out);

    MI_PostResult(context, MI_RESULT_OK);        
}

void MI_CALL MSFT_SwitchService_Invoke_DisableVLAN(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_DisableVLAN* in)
{
    /*
    int i = 0;
    MSFT_NetworkVLAN** stVlan = 0;
    MSFT_SwitchService_DisableVLAN out;
    int tmp = 0;
    
    stVlan = in->VLAN.value.data;

    for(; i < in->VLAN.value.size; i++)
    {
        tmp = atoi(stVlan[i]->InstanceID.value);
        MSFT_NetworkVLAN_Set_IsEnabled(&stVlanConfig[tmp], 0);
    }

    MSFT_SwitchService_DisableVLAN_Construct(&out, context);

    MSFT_SwitchService_DisableVLAN_Set_MIReturn(&out, 0);
    
    MSFT_SwitchService_DisableVLAN_Post(&out, context);
    
    MSFT_SwitchService_DisableVLAN_Destruct(&out);

    MI_PostResult(context, MI_RESULT_OK);
    */

    int i = 0;
    MSFT_NetworkVLAN** stVlan = 0;
    MSFT_SwitchService_EnableVLAN out;
    int tmp = 0;/*temp*/
    MSFT_NetworkVLAN stNetworkVlan;
    char chInstanceIDBuf[10] = {0};
    
    MSFT_NetworkVLAN_Construct(&stNetworkVlan, context);

    
    stVlan = in->VLAN.value.data;

    for(; i < in->VLAN.value.size; i++)
    {
        tmp = atoi(stVlan[i]->InstanceID.value);
        MSFT_NetworkVLAN_Set_IsEnabled(&stVlanConfig[tmp], 1);
        stVlanConfig[tmp].IsEnabled.value = 0;
    }

    

    MSFT_NetworkVLAN_Set_VLANId(&stNetworkVlan, tmp);
    MSFT_NetworkVLAN_Set_IsEnabled(&stNetworkVlan,  0);                               
    MSFT_NetworkVLAN_Post(&stNetworkVlan, context);

    MSFT_SwitchService_EnableVLAN_Construct(&out, context);

    MSFT_SwitchService_EnableVLAN_Set_MIReturn(&out, 0);
    
    MSFT_SwitchService_EnableVLAN_Post(&out, context);
    
    MSFT_SwitchService_EnableVLAN_Destruct(&out);

    MI_PostResult(context, MI_RESULT_OK);  
    
}

void MI_CALL MSFT_SwitchService_Invoke_SetVLANState(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_SetVLANState* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_CreateLinkAggregation(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CreateLinkAggregation* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_RemoveLinkAggregation(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_RemoveLinkAggregation* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_AddPortToAggregation(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_AddPortToAggregation* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_RemovePortFromLinkAggregation(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_RemovePortFromLinkAggregation* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_CopyCurrentToStartup(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CopyCurrentToStartup* in)
{
    MSFT_SwitchService_CopyCurrentToStartup out;

    memcpy(stVlanConfigStartup, stVlanConfig, sizeof(MSFT_NetworkVLAN)*MAX_Vlan_NUM);

    MSFT_SwitchService_CopyCurrentToStartup_Construct(&out, context);
    MSFT_SwitchService_CopyCurrentToStartup_Set_MIReturn(&out, 0);   
    MSFT_SwitchService_CopyCurrentToStartup_Post(&out, context);    
    MSFT_SwitchService_CopyCurrentToStartup_Destruct(&out);
    
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_SwitchService_Invoke_CopyStartupToCurrent(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CopyStartupToCurrent* in)
{
    MSFT_SwitchService_CopyCurrentToStartup out;
    int i = 0;
    int a = 0;                             
    nc_rpc *rpc = NULL;               
    nc_reply* reply = NULL;                         
    char  send_data_1[1000] = {0};          
    char  *send_point = send_data_1;           
    char  send_data[1000] =""; 

    /*配置文件中有的重新加载*/
    for(;i<MAX_Vlan_NUM;i++)
    {   
        if((0 == stVlanConfig[i].VLANId.value)&&(0 < stVlanConfigStartup[i].VLANId.value))
        {
            sprintf(send_data, "<edit-config><target><running/></target><default-operation>merge</default-operation><error-option>rollback-on-error</error-option><config><vlan xmlns=\"http://www.huawei.com/netconf/vrp\"content-version=\"1.0\" format-version=\"1.0\"><vlans><vlan operation=\"create\"><vlanId>%d</vlanId><vlanName>%s</vlanName><vlanDesc></vlanDesc><vlanType>common</vlanType><vlanif><cfgBand></cfgBand><dampTime></dampTime></vlanif></vlan></vlans></vlan></config></edit-config>",stVlanConfigStartup[i].VLANId.value,stVlanConfigStartup[i].Description.value);	               

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
        
        }
    }

    memcpy(stVlanConfig, stVlanConfigStartup, sizeof(MSFT_NetworkVLAN)*MAX_Vlan_NUM);

    MSFT_SwitchService_CopyStartupToCurrent_Construct(&out, context);
    MSFT_SwitchService_CopyStartupToCurrent_Set_MIReturn(&out, 0);   
    MSFT_SwitchService_CopyStartupToCurrent_Post(&out, context);    
    MSFT_SwitchService_CopyStartupToCurrent_Destruct(&out);
    
    MI_Context_PostResult(context, MI_RESULT_OK);

    MSFT_NetworkVLAN stVlanConfig[MAX_Vlan_NUM];

    
}

void MI_CALL MSFT_SwitchService_Invoke_CopyCurrentToFile(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CopyCurrentToFile* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_CopyFile(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CopyFile* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_CopyStartupToFile(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CopyStartupToFile* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_CopyFileToCurrent(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CopyFileToCurrent* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_CopyFileToStartup(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CopyFileToStartup* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_ClearCurrent(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ClearCurrent* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_ClearStartup(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ClearStartup* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_DeleteFile(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_DeleteFile* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_CreateRemoteServerGroup(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CreateRemoteServerGroup* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_RemoveRemoteServerGroup(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_RemoveRemoteServerGroup* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_ConfigureSeviceAccessPoint(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ConfigureSeviceAccessPoint* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_ModifySeviceAccessPoint(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ModifySeviceAccessPoint* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_DeleteSeviceAccessPoint(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_DeleteSeviceAccessPoint* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_ApplyPortProfile(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ApplyPortProfile* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_ReloadSwitch(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ReloadSwitch* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_SetMACAddressAgingTime(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_SetMACAddressAgingTime* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_AddStaticMACTableEntry(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_AddStaticMACTableEntry* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_ClearStaticMACTableEntry(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ClearStaticMACTableEntry* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_SwitchService_Invoke_ClearDynamicMACTableEntries(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ClearDynamicMACTableEntries* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

