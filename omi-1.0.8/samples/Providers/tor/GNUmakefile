include /opt/omi-1.0.8/share/omi.mak

DEFINES = MI_API_VERSION=2
PROVIDER = tor
SOURCES = $(wildcard *.c)
CLASSES = MSFT_FeatureCIM_ComputerSystemCIM_RegisteredProfileCIM_ComRegProfMSFT_EthernetPortCIM_EthPortAssocationDataCIM_LANEndpointCIM_EthPortAssociationLANEndCIM_VlanEndPointCIM_LANEndAssociationVlanEndCIM_VlanEndPointSettingDataCIM_VlanEndAssociationDataMSFT_SwitchServiceMSFT_NetworkVLANMSFT_MACTableEntryCIM_EthernetPortAllocationSettingDataCIM_VlanAssociationVlanEndCIM_RegisterProfileAssociationPhyComputerSysMSFT_GlobalEthernetSwitchSettingDataCIM_CSAssociationGlobalSettingMSFT_MACTableCIM_MACTableAssociationEntry 

$(LIBRARY): $(OBJECTS)
	$(CC) $(CSHLIBFLAGS) $(OBJECTS) libnetconf.so -o $(LIBRARY)

%.o: %.c
	$(CC) -c $(CFLAGS) $(INCLUDES) $< -o $@

reg:
	$(BINDIR)/omireg -n interop $(CURDIR)/$(LIBRARY)

gen:
	$(BINDIR)/omigen -m tor schema.mof MSFT_Feature CIM_ComputerSystem CIM_RegisteredProfile CIM_ComRegProf MSFT_EthernetPort CIM_EthPortAssocationData CIM_LANEndpoint CIM_EthPortAssociationLANEnd CIM_VlanEndPoint CIM_LANEndAssociationVlanEnd CIM_VlanEndPointSettingData CIM_VlanEndAssociationData MSFT_SwitchService MSFT_NetworkVLAN MSFT_MACTableEntry CIM_EthernetPortAllocationSettingData CIM_VlanAssociationVlanEnd CIM_RegisterProfileAssociationPhyComputerSys MSFT_GlobalEthernetSwitchSettingData CIM_CSAssociationGlobalSetting MSFT_MACTable CIM_MACTableAssociationEntry

clean:
	rm -f $(LIBRARY) $(OBJECTS) $(PROVIDER).reg


