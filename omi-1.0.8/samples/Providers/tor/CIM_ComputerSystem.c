/* @migen@ */
#include <MI.h>
#include "CIM_ComputerSystem.h"

#include <stdio.h>
//#include "libnetconf.h"
#include <string.h>
#include <stdlib.h>

#include "messages.h"
#include "stdio.h"


void MI_CALL CIM_ComputerSystem_Load(
    CIM_ComputerSystem_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context)
{
    *self = NULL;
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_ComputerSystem_Unload(
    CIM_ComputerSystem_Self* self,
    MI_Context* context)
{
    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MSFT_EthernetPort_ReadSysName(CIM_ComputerSystem *stComputerSystem,  MI_Context* context)
{ 
    
    //char* host = "10.136.57.88";        
    unsigned short port = 22;        
    char* user = "rootDC";			  	          
    int a = 0;        
    int b = 0;    
    int i = 0;        
    struct nc_cpblts * cpblts;        
    struct nc_session * session;            
    nc_rpc *rpc = NULL;           
    nc_reply* reply = NULL;           
    NC_REPLY_TYPE reply_type;        
    char  send_data_1[1000] = {0};      
    char  *send_point = send_data_1;       
    char  data[50000] = {0};        
    char  *data_pointer = data;		     
    char  discription[100] = {0};	        
    char  des[] = "<sysName>";    
    char  des2[] = "</sysName>";	    
    char  *p = data;    
    char  *q = data;    
    char  *r = data;	    
    char  *vlanheader_pointer = data;	    
    char  send_data[1000] ="";    

    
    
    sprintf(send_data, "<get><filter type=\"subtree\"><system xmlns=\"http://www.huawei.com/netconf/vrp\" format-version=\"1.0\" content-version=\"1.0\"><systemInfo><sysName></sysName><sysContact></sysContact><sysLocation></sysLocation><sysDesc></sysDesc><sysObjectId></sysObjectId><sysGmtTime></sysGmtTime><sysUpTime></sysUpTime><sysService></sysService><platformName></platformName><platformVer></platformVer><productName></productName><productVer></productVer><patchVer></patchVer><esn></esn><mac></mac><lsRole></lsRole><authenFlag></authenFlag></systemInfo></system></filter></get>");
        
    //cpblts = nc_session_get_cpblts_default();            
  
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
            while(NULL != vlanheader_pointer)			
            {                           
                //description start             
                p = (char*)strstr(vlanheader_pointer,des);              
                if(NULL == p)               
                {                  
                    break;              
                }                                               
                                    
                q = (char*)strstr(vlanheader_pointer,des2);
                for(r=p+9,i=0;r!=q;r++,i++)                 
                {                       
                    discription[i] = *r;                    
                }   
                discription[i+1]='\0';
                printf("%s\n", discription);                                            
                vlanheader_pointer = p+18;  

                CIM_ComputerSystem_Set_Name(stComputerSystem, MI_T(discription));
                CIM_ComputerSystem_Set_ElementName(stComputerSystem, MI_T(discription));
                                     
                //description end                                              
                
                for(i=0;i<75;i++)               
                {                   
                    discription[i] = 0;               
                }  
				
              
			}

		}		
	}

    //MI_T("SDN2")  MI_T(discription)
    

  
    nc_rpc_free(rpc);    
    nc_reply_free(reply);     
    //nc_session_free(session);   
  

}

void MI_CALL CIM_ComputerSystem_EnumerateInstances(
    CIM_ComputerSystem_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    CIM_ComputerSystem stComputerSystem;

    CIM_ComputerSystem_Construct(&stComputerSystem, context);

    CIM_ComputerSystem_Set_CreationClassName(&stComputerSystem, MI_T("LINUX"));

    MSFT_EthernetPort_ReadSysName(&stComputerSystem, context);

    CIM_ComputerSystem_Post(&stComputerSystem, context);

    CIM_ComputerSystem_Destruct(&stComputerSystem);

    MI_Context_PostResult(context, MI_RESULT_OK);
}

void MI_CALL CIM_ComputerSystem_GetInstance(
    CIM_ComputerSystem_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComputerSystem* instanceName,
    const MI_PropertySet* propertySet)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_ComputerSystem_CreateInstance(
    CIM_ComputerSystem_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComputerSystem* newInstance)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}


void MSFT_EthernetPort_ModifySysName(CIM_ComputerSystem *stComputerSystem, MI_Context* context)
{ 
    
    //char* host = "10.136.57.88";        
    unsigned short port = 22;        
    char* user = "rootDC";			  	          
    int a = 0;        
    int b = 0;    
    int i = 0;        
    struct nc_cpblts * cpblts;        
    struct nc_session * session;            
    nc_rpc *rpc = NULL;           
    nc_reply* reply = NULL;           
    NC_REPLY_TYPE reply_type;        
    char  send_data_1[1000] = {0};      
    char  *send_point = send_data_1;       
    char  data[50000] = {0};        
    char  *data_pointer = data;		     
    char  discription[100] = {0};	        
    char  des[] = "<sysName>";    
    char  des2[] = "</sysName>";	    
    char  *p = data;    
    char  *q = data;    
    char  *r = data;	    
    char  *vlanheader_pointer = data;	    
    char  send_data[1000] ="";    

    
    
    sprintf(send_data, "<get><filter type=\"subtree\"><system xmlns=\"http://www.huawei.com/netconf/vrp\" format-version=\"1.0\" content-version=\"1.0\"><systemInfo><sysName></sysName><sysContact></sysContact><sysLocation></sysLocation><sysDesc></sysDesc><sysObjectId></sysObjectId><sysGmtTime></sysGmtTime><sysUpTime></sysUpTime><sysService></sysService><platformName></platformName><platformVer></platformVer><productName></productName><productVer></productVer><patchVer></patchVer><esn></esn><mac></mac><lsRole></lsRole><authenFlag></authenFlag></systemInfo></system></filter></get>");

    sprintf(send_data, "<edit-config><target><running/></target><default-operation>merge</default-operation><error-option>rollback-on-error</error-option><config><system xmlns=\"http://www.huawei.com/netconf/vrp\"content-version=\"1.0\" format-version=\"1.0\"><systemInfo><sysName>%s</sysName></systemInfo></system></config></edit-config>",stComputerSystem->ElementName.value);
        
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
    

    //MI_T("SDN2")  MI_T(discription)
  
    nc_rpc_free(rpc);    
    nc_reply_free(reply);     
    //nc_session_free(session);   
  

}


void MI_CALL CIM_ComputerSystem_ModifyInstance(
    CIM_ComputerSystem_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComputerSystem* modifiedInstance,
    const MI_PropertySet* propertySet)
{
    CIM_ComputerSystem stComputerSystem;

    CIM_ComputerSystem_Construct(&stComputerSystem, context);

    if(modifiedInstance->ElementName.exists)
    {
        CIM_ComputerSystem_Set_ElementName(&stComputerSystem, modifiedInstance->ElementName.value);

    }

    MSFT_EthernetPort_ModifySysName(modifiedInstance, context);

    CIM_ComputerSystem_Post(&stComputerSystem, context);

    CIM_ComputerSystem_Destruct(&stComputerSystem);

    MI_Context_PostResult(context, MI_RESULT_OK);
}


void MI_CALL CIM_ComputerSystem_DeleteInstance(
    CIM_ComputerSystem_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComputerSystem* instanceName)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_ComputerSystem_Invoke_RequestStateChange(
    CIM_ComputerSystem_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const CIM_ComputerSystem* instanceName,
    const CIM_ComputerSystem_RequestStateChange* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

void MI_CALL CIM_ComputerSystem_Invoke_SetPowerState(
    CIM_ComputerSystem_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const CIM_ComputerSystem* instanceName,
    const CIM_ComputerSystem_SetPowerState* in)
{
    MI_Context_PostResult(context, MI_RESULT_NOT_SUPPORTED);
}

