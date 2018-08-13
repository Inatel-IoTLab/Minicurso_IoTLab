#define BLYNK_PRINT Serial   
#include <ESP8266_Lib.h>
#include <BlynkSimpleShieldEsp8266.h>

char auth[] = "917dc8482cbd4e6687bc1e13bbbd7897";
char ssid[] = "WLL-Inatel";
char pass[] = "inatelsemfio";

#include <SoftwareSerial.h>
SoftwareSerial EspSerial(8, 9); // RX, TX

#define ESP8266_BAUD 9600

ESP8266 wifi(&EspSerial);

void setup()
{
  Serial.begin(9600);
  delay(10);
  EspSerial.begin(ESP8266_BAUD);
  delay(10);

  Blynk.begin(auth, wifi, ssid, pass);
}

void loop()
{
  Blynk.run();
}

