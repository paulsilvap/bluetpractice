
#include <SoftwareSerial.h>

SoftwareSerial wirelessNetworkYT(10,11);

char DAT = 0;
int RedFlag = 0;
int GreenFlag = 0;
int REDLED = 5;
int GREENLED = 3;
int GB = 0;

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
      GB = GB + 10;
      analogWrite(GREENLED, GB);
    }
      if (DAT =='3'){ 
      GB = GB - 10;
      analogWrite(GREENLED, GB);
    }
  }
  
}
