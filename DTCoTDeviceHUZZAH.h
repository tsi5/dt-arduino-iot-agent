#ifndef DT_COT_DEVICE_HUZZAH_HEADER_FILE
#define DT_COT_DEVICE_HUZZAH_HEADER_FILE

#include "DTCoTPrivate.h"
#include "DTCoTDeviceWiFi.h"

namespace DTCoT {

class CoTConfigDeviceHUZZAH: public CoTConfigBase {
public:
	CoTConfigDeviceHUZZAH( const char* wifiSsid, const char* wifiPassword);

public:
	const char* getWiFiSsid();
	const char* getWiFiPassword();
};

class CoTDeviceHUZZAH : public CoTDeviceWiFi {
public:
	CoTDeviceHUZZAH( const CoTConfigDeviceHUZZAH& cfg );

public:
	bool init();

	void errorHandler( const CoTHandlerParam handler ) { };
};

} /* namespace DTCoT */

#endif /* DT_COT_DEVICE_ADAFRUIT_FONA_HEADER_FILE */
