#ifndef declarations_h
#define declarations_h

#include <Arduino.h>
#include "Setup.h"

/** Build time */
const char compileDate[] = __DATE__ " " __TIME__;

/** WiFiServer class to create TCP socket server on port tcpComPort */
WiFiServer tcpServer(tcpComPort);
/** FTP client */
WiFiClient ftpClient;
/** External FTP server for data transfer*/
WiFiClient ftpDataClient;
/** External FTP server IP */
IPAddress ftpDataServer( 93, 104, 213, 79 );
/** External FTP server port */
uint16_t ftpDataPort = 21;

/** Hostname & AP name created from device function & 1. and 4. to 6. part of MAC address */
char hostApName[] = "MHC-Cam-xxxxxxxx";
/** Debug name created from last part of hostname */
String OTA_HOST = "Cam-xxxxxxxx";
/** IP address of this module */
IPAddress ipAddr;


/** Buffer for received/sent data */
char ftpBuf[128];
/** Counter for sent/received data */
char ftpCount;

/** Last time NTP sync was performed */
time_t lastSyncTime;
/** Flag if heart beat was triggered */
boolean heartBeatTriggered = false;
/** Timer for heart beat */
Ticker heartBeatTimer;

/** Bug capture trial year of last good NTP time received */
int lastKnownYear = 0;

/** Flag for OTA update running */
boolean otaRunning = false;
/** Flag for TCP debugging */
bool debugOn = false;

/** On ESP: camera TX connected to GPIO14, camera RX to GPIO12: */
// SoftwareSerial cameraconnection = SoftwareSerial(14, 12);
SoftwareSerial cameraconnection = SoftwareSerial(14, 12, false, 256);
/** Camera connection */
Adafruit_VC0706 cam = Adafruit_VC0706(&cameraconnection);
/** Flag if camera was found */
boolean hasCamera = true;
/** Name of the last saved picture */
char filename[19];

/** Flashlight LED output */
int flashLED = 5;
/** Blinking LED output */
int blinkLED = 4;

#endif // declarations_h