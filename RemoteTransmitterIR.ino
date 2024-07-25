//##2024 Coding by Vinh Cao###//
#include <IRremote.h>

IRsend irsend;
const int bientroX = A5; 
const int bientroY = A4; 
const int POWER = 2;    
const int UP = 11;
const int RIGHT = 10;
const int LEFT = 9;
const int OK = 7;
const int DW = 5;

void setup() {
  pinMode(UP, INPUT_PULLUP);  
  pinMode(RIGHT, INPUT_PULLUP);  
  pinMode(LEFT, INPUT_PULLUP);  
  pinMode(OK, INPUT_PULLUP);  
  pinMode(DW, INPUT_PULLUP);  
  pinMode(POWER, INPUT_PULLUP);
  pinMode(bientroX, INPUT);
  pinMode(bientroY, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void sendSonyRepeated(unsigned long data, int nbits) {
  for (int i = 0; i < 2; i++) {
    irsend.sendSony(data, nbits);
    // delay(50);
     digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(30);                      // wait for a second
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
    delay(30);    
  }
}

void checkButton(int buttonPin, unsigned long irCode) {
  if (digitalRead(buttonPin) == LOW) {
    delay(20);
    if (digitalRead(buttonPin) == LOW) {
      sendSonyRepeated(irCode, 12);
      while (digitalRead(buttonPin) == LOW);
    }
  }
}

void checkJoystick(int xValue, unsigned long irCodeHigh, unsigned long irCodeLow) {
  if (xValue > 550) {
    sendSonyRepeated(irCodeHigh, 12);
  } else if (xValue < 450) {
    sendSonyRepeated(irCodeLow, 12);
  }
}

void loop() {
  int x = analogRead(bientroX);  // Read the value of the X axis
  int y = analogRead(bientroY);  // Read the value of the Y axis
  int KEY = digitalRead(POWER);  // Read the value of the button

  checkButton(UP, 0x2F0);
  checkButton(RIGHT, 0xCD0);
  checkButton(LEFT, 0x2D0);
  checkButton(DW, 0xAF0);
  checkButton(OK, 0xA70);
  checkButton(POWER, 0xA90);

  checkJoystick(x, 0x490, 0xC90);
}
