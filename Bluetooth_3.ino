
#include <SoftwareSerial.h>

SoftwareSerial wirelessNetworkYT(10,11);

char DAT = 0;
int RedFlag = 0;
int GreenFlag = 0;
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
    
    if (DAT == '1'){
    if (RedFlag) {
      digitalWrite(REDLED, LOW);
      RedFlag =0;
    }
    else {
      digitalWrite(REDLED, HIGH);
      RedFlag = 1;
    }
    }
    if (DAT =='2'){
    if (GreenFlag) {
      digitalWrite(GREENLED, LOW);
      GreenFlag = 0;
    }
    else {
      digitalWrite(GREENLED, HIGH);
      GreenFlag = 1;
    }
    }
  }
  
}
