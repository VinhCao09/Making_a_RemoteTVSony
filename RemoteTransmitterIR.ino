#include <IRremote.h>

IRsend irsend;
int bientroX = A5 ; 
int bientroY = A4 ; 
int POWER = 2;    
int UP = 11;
int RIGHT = 10;
int LEFT = 9;
int OK = 7;
int DW = 5;
void setup() {
  pinMode(UP, INPUT_PULLUP);  
  pinMode(RIGHT, INPUT_PULLUP);  
  pinMode(LEFT, INPUT_PULLUP);  
  pinMode(OK, INPUT_PULLUP);  
  pinMode(DW, INPUT_PULLUP);  
  pinMode(POWER, INPUT_PULLUP);
  pinMode(A5, INPUT);
  pinMode(A4, INPUT);
}

void loop() 
{
int x = analogRead(bientroX);  // doc gia tri cua truc X
int y = analogRead(bientroY);  // doc gia tri cua truc Y
int KEY = digitalRead(POWER);  // doc gia tri cua nut nhan
if(digitalRead(UP)==LOW){
    delay(20);
    if(digitalRead(UP)==LOW){
       irsend.sendSony(0x2F0, 12);  delay(50); irsend.sendSony(0x2F0, 12);delay(50);
    irsend.sendSony(0x2F0, 12);delay(50);
      irsend.sendSony(0x2F0, 12);delay(50);
    while(digitalRead(UP)==LOW);
    }
  }

if(digitalRead(RIGHT)==LOW){
    delay(20);
    if(digitalRead(RIGHT)==LOW){
       irsend.sendSony(0xCD0, 12);  delay(50); irsend.sendSony(0xCD0, 12);delay(50);
    irsend.sendSony(0xCD0, 12);delay(50);
      irsend.sendSony(0xCD0, 12);delay(50);
    while(digitalRead(RIGHT)==LOW);
    }
  }

  if(digitalRead(LEFT)==LOW){
    delay(20);
    if(digitalRead(LEFT)==LOW){
       irsend.sendSony(0x2D0, 12);  delay(50); irsend.sendSony(0x2D0, 12);delay(50);
    irsend.sendSony(0x2D0, 12);delay(50);
      irsend.sendSony(0x2D0, 12);delay(50);
    while(digitalRead(LEFT)==LOW);
    }
  }

    if(digitalRead(DW)==LOW){
    delay(20);
    if(digitalRead(DW)==LOW){
       irsend.sendSony(0xAF0 , 12);  delay(50); irsend.sendSony(0xAF0, 12);delay(50);
    irsend.sendSony(0xAF0, 12);delay(50);
      irsend.sendSony(0xAF0, 12);delay(50);
    while(digitalRead(DW)==LOW);
    }
  }
  
    if(digitalRead(OK)==LOW){
    delay(20);
    if(digitalRead(OK)==LOW){
       irsend.sendSony(0xA70  , 12);  delay(50); irsend.sendSony(0xA70, 12);delay(50);
    irsend.sendSony(0xA70, 12);delay(50);
      irsend.sendSony(0xA70, 12);delay(50);
    while(digitalRead(OK)==LOW);
    }
  }

      if(digitalRead(POWER)==LOW){
    delay(20);
    if(digitalRead(POWER)==LOW){
       irsend.sendSony(0xA90  , 12);  delay(50); irsend.sendSony(0xA90, 12);delay(50);
    irsend.sendSony(0xA90, 12);delay(50);
      irsend.sendSony(0xA90, 12);delay(50);
    while(digitalRead(POWER)==LOW);
    }
  }

             if (x>550)
              {
                    irsend.sendSony(0x490, 12);  delay(50); irsend.sendSony(0x490, 12);delay(50);
      irsend.sendSony(0x490, 12);delay(50);
        irsend.sendSony(0x490, 12);delay(50);
              }
                    if (x<450)
              {
                    irsend.sendSony(0xC90, 12);  delay(50); irsend.sendSony(0xC90, 12);delay(50);
      irsend.sendSony(0xC90, 12);delay(50);
        irsend.sendSony(0xC90, 12);delay(50);
              }
      


}