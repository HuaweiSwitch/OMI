Overview

OMI is a software service that runs on managed nodes. It provides the manageability infrastructure for building distributed systems management applications based on DMTF management standards.
OMI enables clients to perform the following operations :

 - GetInstance - gets a single instance from the server.
 EnumerateInstances - enumerates instances of a given CIM class.
 - CreateInstance - creates an instance of a CIM class.
 DeleteInstance - deletes an instance.
 - ModifyInstance - modifies the properties of an instance.
 - Associators - finds instances associated with a given instance.
 - References - finds references that refer to a given instance.
 - Invoke - invokes a method on a given instance or class.

Installation

Circumstance instruction:
This repository is suitable for OMI 1.0.8 which runs in lxc environment contained by CE switch.

Main steps:
 - Install CE switch with firmware which included lxc environment.
 - Configure IP address for lxc environment for CE switch.
 - Enable netconf connection capability for CE switch.
 - Install OMI in lxc environment.
 - Start OMI server .
 
Example usage

An example of PowerShell script for CE switch is followed. The script aimed at creating a new global session, and deliver some parameters.

#TestCase 0 Begin

	$username = "xxxx"
	$password = "xxxxxx"
	$secstr = New-Object -TypeName System.Security.SecureString
	$password.ToCharArray() | ForEach-Object {$secstr.AppendChar($_)}
	$Cred = new-object -typename System.Management.Automation.PSCredential -argumentlist $username, $secstr
	$options = New-CimSessionOption -UseSsl -SkipCACheck
	$Session = New-CimSession -ComputerName P4080RDB -Authentication Basic -Credential $Cred -SessionOption $options

#TestCase 0 End

References

[1] OMI opensource online instruction is located at:
http://www.opengroup.org/software/omi
[1] For OMI using guide document:
https://collaboration.opengroup.org/omi/documents.php
