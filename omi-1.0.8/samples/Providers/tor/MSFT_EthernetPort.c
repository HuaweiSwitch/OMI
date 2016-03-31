/* @migen@ */
#include <MI.h>
#include "MSFT_EthernetPort.h"

#include <stdio.h>
//#include "libnetconf.h"
#include <string.h>
#include <stdlib.h>

#include "messages.h"
#include "stdio.h"

#define MAX_EthernetPort_NUM 100

MSFT_EthernetPort stEthPort[MAX_EthernetPort_NUM];/*待netconf接口提供后，删除*/


void MI_CALL MSFT_EthernetPort_Load(
    MSFT_EthernetPort_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;

    int i = 0;

    for(;i < MAX_EthernetPort_NUM; i++)
    {
        MSFT_EthernetPort_Construct(&stEthPort[i], context);
    }

    /*
    //MSFT_EthernetPort_Set_ElementName(&stEthPort[0], MI_T("GE1/0/1"));
    MSFT_EthernetPort_Set_Name(&stEthPort[0], MI_T("GE1/0/1"));
    MSFT_EthernetPort_Set_EnabledState(&stEthPort[0], 3);
    MSFT_EthernetPort_Set_SystemCreationClassName(&stEthPort[0], MI_T("DEVM"));
    MSFT_EthernetPort_Set_SystemName(&stEthPort[0], MI_T("SDN2"));
    MSFT_EthernetPort_Set_CreationClassName(&stEthPort[0], MI_T("PHYCIAL"));
    MSFT_EthernetPort_Set_DeviceID(&stEthPort[0], MI_T("1/0/1"));
    MSFT_EthernetPort_Set_Speed(&stEthPort[0], 1000000000);
    
    MSFT_EthernetPort_Set_ElementName(&stEthPort[1], MI_T("10GE"));
    MSFT_EthernetPort_Set_Name(&stEthPort[1], MI_T("10GE1/0/2"));
    MSFT_EthernetPort_Set_EnabledState(&stEthPort[1], 3);
    MSFT_EthernetPort_Set_SystemCreationClassName(&stEthPort[1], MI_T("DEVM"));
    MSFT_EthernetPort_Set_SystemName(&stEthPort[1], MI_T("SDN2"));
    MSFT_EthernetPort_Set_CreationClassName(&stEthPort[1], MI_T("PHYCIAL"));
    MSFT_EthernetPort_Set_DeviceID(&stEthPort[1], MI_T("1/0/2"));
    
    MI_Context_PostResult(context, MI_RESULT_OK);

    
    MSFT_EthernetPort stEthPort[MAX_EthernetPort_NUM];
    MSFT_EthernetPort stEthport2 = {0};
    MSFT_EthernetPort_Set_ElementName(&stEthport2, MI_T("10GE"));
    MSFT_EthernetPort_Set_Name(&stEthport2, MI_T("10GE1/0/1"));
    MSFT_EthernetPort_Set_EnabledState(&stEthport2, 3);
    MSFT_EthernetPort_Set_SystemCreationClassName(&stEthport2, MI_T("DEVM"));
    MSFT_EthernetPort_Set_SystemName(&stEthport2, MI_T("SDN2"));
    MSFT_EthernetPort_Set_CreationClassName(&stEthport2, MI_T("PHYCIAL"));
    MSFT_EthernetPort_Set_DeviceID(&stEthport2, MI_T("1/0/1"));

    
    MSFT_EthernetPort_Post(&stEthport2, context);
    MI_Context_PostResult(context, MI_RESULT_OK);
    */
}

void MI_CALL MSFT_EthernetPort_Unload(
    MSFT_EthernetPort_Self* self,
    MI_Context* context)
{
    int i = 0;

    for(;i < MAX_EthernetPort_NUM; i++)
    {
        MSFT_EthernetPort_Destruct(&stEthPort[i]);
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}


void MSFT_EthernetPort_ReadPort(MI_Context* context)
{ 
    
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
    display[20] ='\0';		
    char  updown[100] = {0};	    
    updown[20] ='\0';    
    char  discription[100] = {0};	    
    discription[80] ='\0';	    
    char  PortGE[] = "<ifName>GE";	    
    char  status[] = "<ifOperStatus>";	
    char  des[] = "<ifDescr";    
    char  des2[] = "</ifDescr>";	    
    char  *p = data;    
    char  *q = data;    
    char  *r = data;	    
    char  *vlanheader_pointer = data;	    
    char  send_data[1000] ="";    
    char cc ='a'; 
    
    MSFT_EthernetPort stEthport2;
    MSFT_EthernetPort_Construct(&stEthport2, context); 
    
    		
    sprintf(send_data, "<get><filter type=\"subtree\"><ifm xmlns=\"http://www.huawei.com/netconf/vrp\" format-version=\"1.0\" content-version=\"1.0\"><interfaces><interface><ifName></ifName><ifPhyType></ifPhyType><ifParentIfName></ifParentIfName><ifNumber></ifNumber><ifDescr></ifDescr><ifAdminStatus></ifAdminStatus><ifLinkProtocol></ifLinkProtocol><ifRouterType></ifRouterType><ifDynamicInfo><ifOperStatus></ifOperStatus><ifOperSpeed></ifOperSpeed></ifDynamicInfo></interface></interfaces></ifm></filter></get>");			     

    cpblts = nc_session_get_cpblts_default();            
  
    //session = nc_session_connect(host, port, user, cpblts);       
    session = context->reserved[0];
    
    if (session == NULL) 
    {    return  -1;    }    
    else{                }       
  
    rpc = nc_rpc_generic(send_data);      
  
    send_point = nc_rpc_dump(rpc);       
   
    a = nc_session_send_recv(session, rpc, &reply);  
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

                if('<' == (*(p+15)))
                {
                    memcpy(display,p+8,7); 
                }
                else
                {
                    memcpy(display,p+8,8); 
                }

                
                printf("%s\n", display);                                        
                vlanheader_pointer = p+18;  
                
                //description start             
                p = (char*)strstr(vlanheader_pointer,des);              
                if(NULL == p)               
                {                  
                    break;              
                }                                               
                cc = *(p+8);                
                if('/' != cc)        
                {                                   
                    q = (char*)strstr(vlanheader_pointer,des2);
                    for(r=p+9,i=0;r!=q;r++,i++)                 
                    {                       
                        discription[i] = *r;                    
                    }                                       
                    printf("%s\n", discription);                                            
                    vlanheader_pointer = p+18;              
                }                               
            
                //description end                                               

                p = (char*)strstr(vlanheader_pointer,status);               
                if(NULL == p)               
                {                   
                    break;              
                }               
                memcpy(updown,p+14,4);              
                printf("%s\n", updown);                                     
                vlanheader_pointer = p+18;
				
                
                MSFT_EthernetPort_Set_ElementName(&stEthport2, MI_T("GE"));
                MSFT_EthernetPort_Set_Name(&stEthport2, MI_T(&display));
                MSFT_EthernetPort_Set_SystemCreationClassName(&stEthport2, MI_T("DEVM"));
                MSFT_EthernetPort_Set_SystemName(&stEthport2, MI_T("SDN2"));
                MSFT_EthernetPort_Set_CreationClassName(&stEthport2, MI_T("PHYCIAL"));
                MSFT_EthernetPort_Set_DeviceID(&stEthport2, MI_T(&display));
                MSFT_EthernetPort_Set_Description(&stEthport2, MI_T(&discription));
                MSFT_EthernetPort_Set_Speed(&stEthport2, 1000000000);
                MSFT_EthernetPort_Set_ElementName(&stEthPort[count], MI_T(&display));
                MSFT_EthernetPort_Set_Name(&stEthPort[count], MI_T(&display));
                MSFT_EthernetPort_Set_EnabledState(&stEthPort[count], 3);
                MSFT_EthernetPort_Set_SystemCreationClassName(&stEthPort[count], MI_T("DEVM"));
                MSFT_EthernetPort_Set_SystemName(&stEthPort[count], MI_T("SDN2"));
                MSFT_EthernetPort_Set_CreationClassName(&stEthPort[count], MI_T("PHYCIAL"));
                MSFT_EthernetPort_Set_DeviceID(&stEthPort[count], MI_T(&display));
                MSFT_EthernetPort_Set_Speed(&stEthPort[count], 1000000000);

                if('u' ==updown[0])
                {
                    MSFT_EthernetPort_Set_EnabledState(&stEthport2, 2);
                }
                else
                {
                    MSFT_EthernetPort_Set_EnabledState(&stEthport2, 3);
                }
                    
    
                MSFT_EthernetPort_Post(&stEthport2, context);

                for(i=0;i<75;i++)               
                {                   
                    discription[i] = 0;               
                }  
				
				for(i=0;i<15;i++)               
                {                   
                    display[i] = 0;               
                }  

                count++;
              
			}

		}		
	}

    MI_Context_PostResult(context, MI_RESULT_OK);

  
    nc_rpc_free(rpc);    
    nc_reply_free(reply);     
    //nc_session_free(session);   
  

}


void MI_CALL MSFT_EthernetPort_EnumerateInstances(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    /*待netconf提供接口*/
    MSFT_EthernetPort_ReadPort(context);

}

void MI_CALL MSFT_EthernetPort_GetInstance(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_EthernetPort* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_EthernetPort_CreateInstance(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_EthernetPort* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}


void MSFT_EthernetPort_SetDescription(MSFT_EthernetPort* inEthPort, MI_Char*value, MI_Context* context)
{ 
    //char* host = "10.136.57.88";    
    unsigned short port = 22;    
    char* user = "rootDC";			  	      
    int a = 0;    
    int b = 0;    
    struct nc_cpblts * cpblts;    
    struct nc_session * session;        
    nc_rpc *rpc = NULL;        
    nc_reply* reply = NULL;        
    NC_REPLY_TYPE reply_type;    
    char  send_data_1[1000] = {0};   
    char  *send_point = send_data_1;    
    char  data[50000] = {0};    
    char  *data_pointer = data;		
    char  send_data[1000] ="";	
    char  statusup[3] ="up";
    char  statusdown[5] ="down";

    sprintf(send_data, "<edit-config><target><running/></target><default-operation>merge</default-operation><error-option>rollback-on-error</error-option><config><ifm xmlns=\"http://www.huawei.com/netconf/vrp\"content-version=\"1.0\" format-version=\"1.0\"><interfaces><interface operation=\"merge\"><ifName>%s</ifName><ifDescr>%s</ifDescr></interface></interfaces></ifm></config></edit-config>",inEthPort->DeviceID.value,value);

    cpblts = nc_session_get_cpblts_default();            
  
    //session = nc_session_connect(host, port, user, cpblts);       
    session = context->reserved[0];
    if (session == NULL) 
    {    return  -1;    }    
    else{                }       
  
    rpc = nc_rpc_generic(send_data);      
  
    send_point = nc_rpc_dump(rpc);       
   
    a = nc_session_send_recv(session, rpc, &reply);  
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
		   
		}		
	} 

  
    nc_rpc_free(rpc);    
    nc_reply_free(reply);     
    //nc_session_free(session);   
  

}

void MI_CALL MSFT_EthernetPort_ModifyInstance(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_EthernetPort* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    MSFT_EthernetPort* modifiedInstance2;
    modifiedInstance2 = &stEthPort[0];/*先固定写死第一个后续修改成用modifiedInstance去查找接口*/

    //端口的带宽先写死，当前交换机5850不支持配置
    if(modifiedInstance2->RequestedSpeed.exists)
    {
        MSFT_EthernetPort_Set_Speed(modifiedInstance2, modifiedInstance2->RequestedSpeed.value);
    }
    

    //if(modifiedInstance->Description.exists)
    //{
         MSFT_EthernetPort_SetDescription(modifiedInstance, modifiedInstance->Description.value,  context);
    //}

     /*待netconf提供接口*/
    //MSFT_EthernetPort_Post(modifiedInstance2, context);
    //MSFT_EthernetPort_Post(modifiedInstance, context);

    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL MSFT_EthernetPort_DeleteInstance(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_EthernetPort* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MSFT_EthernetPort_SetPortStatus(MSFT_EthernetPort* inEthPort,MSFT_EthernetPort_RequestStateChange* lin,MI_Context* context)
{ 
    //char* host = "10.136.57.88";    
    unsigned short port = 22;    
    char* user = "rootDC";			  	      
    int a = 0;    
    int b = 0;    
    struct nc_cpblts * cpblts;    
    struct nc_session * session;        
    nc_rpc *rpc = NULL;        
    nc_reply* reply = NULL;        
    NC_REPLY_TYPE reply_type;    
    char  send_data_1[1000] = {0};   
    char  *send_point = send_data_1;    
    char  data[50000] = {0};    
    char  *data_pointer = data;		
    char  send_data[1000] ="";	
    char  statusup[3] ="up";
    char  statusdown[5] ="down";


    if(2 == lin->RequestedState.value) //enable
    {
        sprintf(send_data, "<edit-config><target><running/></target><default-operation>merge</default-operation><error-option>rollback-on-error</error-option><config><ifm xmlns=\"http://www.huawei.com/netconf/vrp\"content-version=\"1.0\" format-version=\"1.0\"><interfaces><interface operation=\"merge\"><ifName>%s</ifName><ifDescr>older</ifDescr><ifAdminStatus>%s</ifAdminStatus></interface></interfaces></ifm></config></edit-config>",inEthPort->DeviceID.value,statusup);
    }
    else if(3 == lin->RequestedState.value) //disable
    {
        sprintf(send_data, "<edit-config><target><running/></target><default-operation>merge</default-operation><error-option>rollback-on-error</error-option><config><ifm xmlns=\"http://www.huawei.com/netconf/vrp\"content-version=\"1.0\" format-version=\"1.0\"><interfaces><interface operation=\"merge\"><ifName>%s</ifName><ifDescr>older</ifDescr><ifAdminStatus>%s</ifAdminStatus></interface></interfaces></ifm></config></edit-config>",inEthPort->DeviceID.value,statusdown);
    }
    else //invalid value
    {
        sprintf(send_data, "<edit-config><target><running/></target><default-operation>merge</default-operation><error-option>rollback-on-error</error-option><config><ifm xmlns=\"http://www.huawei.com/netconf/vrp\"content-version=\"1.0\" format-version=\"1.0\"><interfaces><interface operation=\"merge\"><ifName>%s</ifName><ifDescr>older</ifDescr><ifAdminStatus>%s</ifAdminStatus></interface></interfaces></ifm></config></edit-config>",inEthPort->DeviceID.value,statusdown);
    }
    
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
		   
		}		
	} 

  
    nc_rpc_free(rpc);    
    nc_reply_free(reply);     
  

}


void MI_CALL MSFT_EthernetPort_Invoke_RequestStateChange(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_RequestStateChange* in)
{

    if(instanceName)
    {
        
        MSFT_EthernetPort_SetPortStatus(instanceName, in,context);/*注意设置的属性*/
        
        MSFT_EthernetPort_RequestStateChange_Construct(in, context);

        MSFT_EthernetPort_RequestStateChange_Set_RequestedState(in, instanceName->EnabledState.value);        
        MSFT_EthernetPort_RequestStateChange_Set_MIReturn(in, 0);
        
        MSFT_EthernetPort_RequestStateChange_Post(in, context);
        
        MSFT_EthernetPort_RequestStateChange_Destruct(in);


        MI_PostResult(context, MI_RESULT_OK);        
    }
    else
    {
        MI_PostResult(context, MI_RESULT_NOT_FOUND);
    }

}

void MI_CALL MSFT_EthernetPort_Invoke_SetPowerState(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_SetPowerState* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_EthernetPort_Invoke_Reset(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_Reset* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_EthernetPort_Invoke_EnableDevice(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_EnableDevice* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_EthernetPort_Invoke_OnlineDevice(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_OnlineDevice* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_EthernetPort_Invoke_QuiesceDevice(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_QuiesceDevice* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_EthernetPort_Invoke_SaveProperties(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_SaveProperties* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL MSFT_EthernetPort_Invoke_RestoreProperties(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_RestoreProperties* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

