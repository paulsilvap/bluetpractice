
#include <SoftwareSerial.h>

SoftwareSerial wirelessNetworkYT(10,11);

char DAT = 0;
int REDLED = 2;
int GREENLED = 3;

void setup() {
  wirelessNetworkYT.begin(38400);
   Serial.begin(9600);
  pinMode(REDLED, OUTPUT);
  pinMode(GREENLED, OUTPUT);
}

void loop() {
  
  if (wirelessNetworkYT.available()){


    DAT = (char) wirelessNetworkYT.read();
        Serial.println(DAT);
    if (DAT == '1'){
    digitalWrite(REDLED,HIGH);
    }
    if (DAT =='2'){
    digitalWrite(REDLED,LOW);
    }
    if (DAT =='3'){
    digitalWrite(GREENLED,HIGH);
    }
    if (DAT =='4'){
    digitalWrite(GREENLED, LOW);
    }
  }
  
}
