#include "DTCoTExtensionIface.h"

using namespace DTCoT;

CoTConfigCommunicationMQTT::CoTConfigCommunicationMQTT( 
	const char* serverUrl
	, unsigned long portNumber 
	, const char* password
	, const char* userId )
	: _serverUrl( serverUrl)
	, _portNumber( portNumber)
	, _password( password)
	, _userId( userId)
	, CoTConfigBase( )
{ }

const char* CoTConfigCommunicationMQTT::getUrl() { 
	return _serverUrl;
}

unsigned long CoTConfigCommunicationMQTT::getPortNumber() { 
	return _portNumber;
}

const char* CoTConfigCommunicationMQTT::getPassword() { 
	return _password;
}

const char* CoTConfigCommunicationMQTT::getUserId() { 
	return _userId;
}



CoTConfigCommunicationMQTTSN::CoTConfigCommunicationMQTTSN( 
	const char* serverIP
	, const char* serverPort
	, const char* imsi
	, const char* password
	 )
	: _serverIP (serverIP)
	, _serverPort (serverPort)
	, _imsi( imsi)
	, _password( password)
	, _clientId  (String(_imsi) + String(_password))
	, CoTConfigBase( )
{
	
	
		
}

const char* CoTConfigCommunicationMQTTSN::getServerIP() { 
	return _serverIP;
}

const char* CoTConfigCommunicationMQTTSN::getServerPort() { 
	return _serverPort;
}


const char* CoTConfigCommunicationMQTTSN::getIMSI() { 
	return _imsi;
}

const char* CoTConfigCommunicationMQTTSN::getPassword() { 
	return _password;
}

const char* CoTConfigCommunicationMQTTSN::getClientId() {
	
	return _clientId.c_str();
	
	
}



CoTConfigDevice::CoTConfigDevice(): CoTConfigBase() { }

