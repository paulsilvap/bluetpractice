
#include <SoftwareSerial.h>

SoftwareSerial wirelessNetworkYT(10,11);

char DAT = 0;

int REDLED = 2;
int GREENLED= 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;

int RedFlag = 0;
int GreenFlag = 0;
int l3f = 0;
int l4f = 0; 
int l5f = 0;


void setup() {
  wirelessNetworkYT.begin(38400);
  Serial.begin(9600);
  pinMode(REDLED, OUTPUT);
  pinMode(GREENLED, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
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

    
        if (DAT == '2'){
    if (GreenFlag) {
      digitalWrite(GREENLED, LOW);
      GreenFlag =0;
    }
    else {
      digitalWrite(GREENLED, HIGH);
      GreenFlag = 1;
    }
    }

    
        if (DAT == '3'){
    if (l3f) {
      digitalWrite(LED3, LOW);
      l3f=0;
    }
    else {
      digitalWrite(LED3, HIGH);
      l3f = 1;
    }
    }

    
        if (DAT == '4'){
    if (l4f) {
      digitalWrite(LED4, LOW);
      l4f =0;
    }
    else {
      digitalWrite(LED4, HIGH);
      l4f = 1;
    }
    }

    
    if (DAT == '5'){
    if (l5f) {
      digitalWrite(LED5, LOW);
      l5f =0;
    }
    else {
      digitalWrite(LED5, HIGH);
      l5f = 1;
    }
    }

        if (DAT == '6'){
        digitalWrite(REDLED, HIGH);
        digitalWrite(GREENLED, HIGH);
        digitalWrite(LED3, HIGH);
        digitalWrite(LED4, HIGH);
        digitalWrite(LED5, HIGH);
        int RedFlag = 0;
        int GreenFlag = 0;
        int l3f = 0;
        int l4f = 0; 
        int l5f = 0;
        
    }

        if (DAT == '7'){
        digitalWrite(REDLED,LOW);
        digitalWrite(GREENLED, LOW);
        digitalWrite(LED3, LOW);
        digitalWrite(LED4, LOW);
        digitalWrite(LED5, LOW);
        int RedFlag = 1;
        int GreenFlag = 1;
        int l3f = 1;
        int l4f = 1; 
        int l5f = 1;
   
    }

  }
  
}
