#include <SoftwareSerial.h>

SoftwareSerial wirelessNetworkYT(10,11);

void setup() {
  Serial.begin(9600);
  Serial.println("Done");
  wirelessNetworkYT.begin(38400);

}

void loop() {
  if (wirelessNetworkYT.available()) {
    //Serial.println("Network Available");
    Serial.write(wirelessNetworkYT.read());
  }

  if (Serial.available()) {
    //Serial.println("Serial Available");
    wirelessNetworkYT.write(Serial.read());
  }
}
