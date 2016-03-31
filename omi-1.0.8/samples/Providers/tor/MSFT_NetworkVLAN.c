/* @migen@ */
#include <MI.h>
#include "MSFT_NetworkVLAN.h"

#include <stdio.h>
//#include "libnetconf.h"
#include <string.h>
#include <stdlib.h>

#include "messages.h"
#include "stdio.h"

void MI_CALL MSFT_NetworkVLAN_Load(
    MSFT_NetworkVLAN_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_NetworkVLAN_Unload(
    MSFT_NetworkVLAN_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

#define MAX_Vlan_NUM 4094
extern MSFT_NetworkVLAN stVlanConfig[MAX_Vlan_NUM];

void MI_CALL MSFT_NetworkVLAN_EnumerateInstances(
    MSFT_NetworkVLAN_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    /*
    MSFT_NetworkVLAN stNetworkVlan;
    char chInstanceIDBuf[10] = {0};
    int i = 0;
    
    MSFT_NetworkVLAN_Construct(&stNetworkVlan, context);

    for(; i < MAX_Vlan_NUM; i++)
    {
        if(stVlanConfig[i].VLANId.value != 0)
        {
            sprintf(chInstanceIDBuf, "%d", stVlanConfig[i].VLANId.value);
            MSFT_NetworkVLAN_Set_InstanceID(&stNetworkVlan, chInstanceIDBuf);
            MSFT_NetworkVLAN_Set_VLANId(&stNetworkVlan, stVlanConfig[i].VLANId.value);
            if( stVlanConfig[i].VLANId.exists)
                MSFT_NetworkVLAN_Set_IsEnabled(&stNetworkVlan,  stVlanConfig[i].IsEnabled.value);  

            if(stVlanConfig[i].ElementName.exists)
            {
                MSFT_NetworkVLAN_Set_ElementName(&stNetworkVlan, stVlanConfig[i].ElementName.value);  
            }
            
            MSFT_NetworkVLAN_Post(&stNetworkVlan, context);
        }
    }
        
    MSFT_NetworkVLAN_Destruct(&stNetworkVlan);   

    MI_Context_PostResult(context, MI_RESULT_OK);
    */
    //char* host = "10.136.57.88";            
    unsigned short port = 22;            
    char* user = "rootDC";			  	              
    int a = 0;            
    int b = 0;        
    int i = 0;       
    int count = 0;     
    struct nc_cpblts * cpblts;            
    struct nc_session * session;                
    nc_rpc *rpc = NULL;               
    nc_reply* reply = NULL;               
    NC_REPLY_TYPE reply_type;            
    char  send_data_1[1000] = {0};          
    char  *send_point = send_data_1;           
    char  data[50000] = {0};            
    char  *data_pointer = data;		        
    char  display[100] = {0};	        
    display[16] ='\0';		          
    char  discription[100] = {0};	        
    discription[80] ='\0';	        
    char  PortGE[] = "<vlanId>";	           
    char  des[] = "<vlanName";        
    char  des2[] = "</vlanName>";	        
    char  *p = data;        
    char  *q = data;        
    char  *r = data;	        
    char  *vlanheader_pointer = data;	        
    char  send_data[1000] ="";        
    char cc ='a';   
    MSFT_NetworkVLAN stNetworkVlan;
    char chInstanceIDBuf[10] = {0};
    MI_Uint16 vlanId =0;
    
    MSFT_NetworkVLAN_Construct(&stNetworkVlan, context);

    /*读取所有VLAN*/	
    sprintf(send_data, "<get><filter type=\"subtree\"><vlan xmlns=\"http://www.huawei.com/netconf/vrp\" content-version=\"1.0\" format-version=\"1.0\"><vlans><vlan><vlanId></vlanId><vlanName></vlanName><vlanDesc></vlanDesc><vlanType></vlanType></vlan></vlans></vlan></filter></get>");	               
    rpc = nc_rpc_generic(send_data);            
    send_point = nc_rpc_dump(rpc);              
    a = nc_session_send_recv(context->reserved[0], rpc, &reply);
    if(a != NC_MSG_REPLY)
    {
        context->reserved[0] = NULL;
        return -1;
    }
    
    if ((reply_type = nc_reply_get_type(reply)) == NC_REPLY_DATA)         
    {               
        data_pointer= nc_reply_get_data(reply);                                     
        if(data_pointer == NULL)        
        {           
            printf("get data failed, no data found\n");     
        }      
        else        
        {                                       
            vlanheader_pointer = data_pointer;                      
            p = (char*) strstr(vlanheader_pointer,PortGE);                     
            while(NULL != vlanheader_pointer)                       
            {                               
                p = (char*)strstr(vlanheader_pointer,PortGE);                               
                if(NULL == p)                               
                {                                      
                    break;                              
                }                    

                if('<' == (*(p+9)))                
                {                    
                    memcpy(display,p+8,1); 
                    vlanId = *(p+8)-48;
                }                
                else if('<' == (*(p+10)))                
                {                    
                    memcpy(display,p+8,2); 
                    vlanId = (*(p+8)-48)*10+(*(p+9)-48);
                }              
                else if('<' == (*(p+11)))                
                {                    
                    memcpy(display,p+8,3);
                    vlanId = ((*(p+8)-48)*10+(*(p+9)-48))*10+*(p+10)-48;
                }              
                else if('<' == (*(p+12)))                
                {                    
                    memcpy(display,p+8,4); 
                    vlanId =((*(p+8)-48)*1000) +((*(p+9)-48)*100) +((*(p+10)-48)*10) +(*(p+11)-48);
                }                          
                printf("VlanId %s\n", display);                                                        
                vlanheader_pointer = p+18;                                  

                //vlan name start                             
                p = (char*)strstr(vlanheader_pointer,des);                              
                if(0 != p)             
                {                                   
                    cc = *(p+9);                                    
                    if('/' != cc)                           
                    {                                                           
                        q = (char*)strstr(vlanheader_pointer,des2);                     
                        for(r=p+10,i=0;r!=q;r++,i++)                                        
                        {                                                   
                            discription[i] = *r;                                            
                        }                                                               
                        printf("vlan name %s\n", discription);
                        vlanheader_pointer = p+18;                                  
                     }               
                 }                                           
                //vlan name end 

                MSFT_NetworkVLAN_Set_InstanceID(&stNetworkVlan, display);
                MSFT_NetworkVLAN_Set_VLANId(&stNetworkVlan, vlanId);
                MSFT_NetworkVLAN_Set_IsEnabled(&stNetworkVlan,  stVlanConfig[vlanId].IsEnabled.value);                  
                MSFT_NetworkVLAN_Set_ElementName(&stNetworkVlan, discription);                
                MSFT_NetworkVLAN_Post(&stNetworkVlan, context);
                
                MSFT_NetworkVLAN_Set_VLANId(&stVlanConfig[vlanId], vlanId);
                MSFT_NetworkVLAN_Set_InstanceID(&stVlanConfig[vlanId], display);
                MSFT_NetworkVLAN_Set_ElementName(&stVlanConfig[vlanId], discription); 

                 for(i=0;i<75;i++)                               
                 {                                       
                    discription[i] = 0;                               
                 }                                
                 for(i=0;i<15;i++)                              
                 {                                       
                    display[i] = 0;                               
                 }                         
             }       
        }           
    }      
    nc_rpc_free(rpc);        
    nc_reply_free(reply); 

    MSFT_NetworkVLAN_Destruct(&stNetworkVlan);   

    MI_Context_PostResult(context, MI_RESULT_OK);
    
}

void MI_CALL MSFT_NetworkVLAN_GetInstance(
    MSFT_NetworkVLAN_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_NetworkVLAN* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_NetworkVLAN_CreateInstance(
    MSFT_NetworkVLAN_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_NetworkVLAN* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_NetworkVLAN_ModifyInstance(
    MSFT_NetworkVLAN_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_NetworkVLAN* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MSFT_NetworkVLAN stNetworkVlan;
    int uiID = 0;
    int a = 0;                             
    nc_rpc *rpc = NULL;               
    nc_reply* reply = NULL;                         
    char  send_data_1[1000] = {0};          
    char  *send_point = send_data_1;           
    char  send_data[1000] =""; 
    
    MSFT_NetworkVLAN_Construct(&stNetworkVlan, context);

    uiID = atoi(modifiedInstance->InstanceID.value);

    /*待netconf实现配置vlan*/
    MSFT_NetworkVLAN_Set_InstanceID(&stNetworkVlan, modifiedInstance->InstanceID.value);

    if(modifiedInstance->ElementName.exists)
    {
        MSFT_NetworkVLAN_Set_ElementName(&stVlanConfig[uiID], modifiedInstance->ElementName.value);     
    }

    sprintf(send_data, "<edit-config><target><running/></target><default-operation>merge</default-operation><error-option>rollback-on-error</error-option><config><vlan xmlns=\"http://www.huawei.com/netconf/vrp\"content-version=\"1.0\" format-version=\"1.0\"><vlans><vlan operation=\"merge\"><vlanId>%d</vlanId><vlanName>%s</vlanName></vlan></vlans></vlan></config></edit-config>",uiID,modifiedInstance->ElementName.value);	               

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

    MSFT_NetworkVLAN_Post(&stNetworkVlan, context);

    MSFT_NetworkVLAN_Destruct(&stNetworkVlan);

    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_NetworkVLAN_DeleteInstance(
    MSFT_NetworkVLAN_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_NetworkVLAN* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

