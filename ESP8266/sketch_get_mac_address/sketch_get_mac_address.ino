// Include Wifi Library
#include <ESP8266WiFi.h>

const int SERIAL_MONITOR_BAUD_RATE = 115200;

void setup() {
  // put your setup code here, to run once:
  
  //Setup Serial Monitor
  Serial.begin(SERIAL_MONITOR_BAUD_RATE);
  delay(500);

  // Print MAC Address to Serial monitor
  Serial.println("MAC Address: ");
  Serial.println(WiFi.macAddress());
}

void loop() {
  // put your main code here, to run repeatedly:

}
