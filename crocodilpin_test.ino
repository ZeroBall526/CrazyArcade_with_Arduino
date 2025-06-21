#include "Keyboard.h"
#define Sensibility 750

const int pin[] = {A0,A1,A2,A3};
//{13,10,6,5}ww
const int key[] = {218,217,216,215};
//{'w','a','s','d'}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Keyboard.begin();

  pinMode(pin[0], INPUT_PULLUP);
  pinMode(pin[1], INPUT_PULLUP);
  pinMode(pin[2], INPUT_PULLUP);
  pinMode(pin[3], INPUT_PULLUP);
  pinMode(8,INPUT_PULLUP);

  pinMode(A5, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<4;i++){
    int val = analogRead(pin[i]);

    Serial.print(key[i]);
    Serial.print(": ");
    Serial.print(val);
    if(val < Sensibility){
      Keyboard.press(key[i]);
    }
    Serial.print(" ");
  }
  int switchKey = digitalRead(8);
  int spaceVal = analogRead(A5);
  if(switchKey == LOW || spaceVal < Sensibility){
    Keyboard.press(0x20);
  }
  Serial.println();

  delay(100);
  Keyboard.releaseAll();
}
