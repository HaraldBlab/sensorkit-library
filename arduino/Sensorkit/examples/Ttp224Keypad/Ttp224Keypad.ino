int Button1Pin = 2;
int Button2Pin = 3;
int Button3Pin = 4;
int Button4Pin = 5;

#include "Ttp224Keypad.h"

Ttp224Keypad keypad(Button1Pin, Button2Pin, Button3Pin, Button4Pin);

void setup() {
  Serial.begin(115200);
  keypad.setup();
}

void loop() {
  Serial.print("Button 1: "); 
  Serial.println(keypad.button1(), DEC);
  Serial.print("Button 2: "); 
  Serial.println(keypad.button2(), DEC);
  Serial.print("Button 3: "); 
  Serial.println(keypad.button3(), DEC);
  Serial.print("Button 4: "); 
  Serial.println(keypad.button4(), DEC);
    
  delay(1000);
 }
