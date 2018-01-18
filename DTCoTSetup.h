#ifndef DTCoT_SETUP_HEADER_FILE
#define DTCoT_SETUP_HEADER_FILE

/* DTCoT Library Setup File
 * Intended audience - library maintainer, advanced library users
 *
 * To activate or deactivate certain feature of the library - 
 * uncomment or comment the definition of the feature respectively.
 */


/* Select the cloud communication method here */

// #define COMMUNICATION_MQTT
#define COMMUNICATION_MQTTSN
// #define COMMUNICATION_REST
// #define COMMUNICATION_RAW_SOCKET

/* Select the MQTT Broker here */

/* io.adaafruit.com*/
#define MQTT_BROKER_ADAFRUIT
#define MQTT_BROKER_DT
/* https://docs.microsoft.com/en-us/azure/iot-hub/iot-hub-mqtt-support */
#define MQTT_BROKER_AZURE


/*Select the authentication method */
#define AUTHENTICATION_NONE
// #define AUTHENTICATION_TLS
// #define AUTHENTICATION_FINGERPRINT


#if defined(COMMUNICATION_MQTT)
#include "DTCotCommunicationMQTT.h"
	#define PREFERED_COMMUNICATION_METHOD CoTCommunicationMQTT
#elif defined(COMMUNICATION_MQTTSN )
#include "DTCotCommunicationMQTTSN.h"
	#define PREFERED_COMMUNICATION_METHOD CoTCommunicationMQTTSN
#elif defined(COMMUNICATION_REST)
	#define PREFERED_COMMUNICATION_METHOD CoTCommunicationREST
#endif
 
 
 /**
 * Hardware Platform specific includes
 */
 
 /**
 * Define which hardware
 */

#define HUZZAH                0
#define GIMASI_TUINO1         1
/**********************************/
#define HW_PLATTFORM          GIMASI_TUINO1
/**********************************/
 

#if HW_PLATTFORM == HUZZAH
   #define HUZZAH_ENABLED     1
 

#elif HW_PLATTFORM == GIMASI_TUINO1
  #define TUINO1_ENABLED      1


#endif
 /**********************************/
 
 
 /**
 * Define which communication path
 */
#define WIFI                  0
#define NB_IOT                1
#define GSM                   2
/**********************************/
#define CONN_TYPE             NB_IOT
/**********************************/


/**
 * communication path specific includes
 */

#if CONN_TYPE == WIFI

	#define WIFI_ENABLED      1


#elif CONN_TYPE == NB_IOT

	#define NB_IOT_ENABLED    1


#elif CONN_TYPE == GSM

	#define GSM_ENABLED       1 


#endif
/**********************************/
 
 
 #define MAX_NETWORK_JOIN_RETRIES 100

#endif /* DTCoT_SETUP_HEADER_FILE */

