#include "Ttp224Keypad.h"

Ttp224Keypad::Ttp224Keypad(int button1, int button2, int button3, int button4) {
  button1Pin = button1;
  button2Pin = button2;
  button3Pin = button3;
  button4Pin = button4;
}
void Ttp224Keypad::setup() {
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(button3Pin, INPUT);
  pinMode(button4Pin, INPUT);
}
bool Ttp224Keypad::button1() {
  int val=digitalRead(button1Pin);
  return val == HIGH;
}
bool Ttp224Keypad::button2() {
  int val=digitalRead(button2Pin);
  return val == HIGH;
}
bool Ttp224Keypad::button3() {
  int val=digitalRead(button3Pin);
  return val == HIGH;
}
bool Ttp224Keypad::button4() {
  int val=digitalRead(button4Pin);
  return val == HIGH;
}
