#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:

  // START THE usb SERIAL MONITOR PORT
  Serial.begin(115200);
  Serial.println("\n\nJesse Em, 000295218");
  Serial.println("\nD1 mini Details:");
  Serial.println("\nESP8266 CHIP ID: ");
  Serial.println(ESP.getChipId());

  Serial.println("\nFLASH CHIP ID:");
  Serial.println(ESP.getFlashChipId());
  Serial.println("\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000); //wait for two seconds
  Serial.println(millis()); //ms

}