#include "BicolorLed.h"

BicolorLed::BicolorLed(int RED, int GREEN) {
  pinRed = RED;
  pinGreen = GREEN;      
}
void BicolorLed::setup() {
  pinMode(pinRed, OUTPUT);
  pinMode(pinGreen, OUTPUT);
}
void BicolorLed::off() {
  digitalWrite(pinRed, LOW);
  digitalWrite(pinGreen, LOW);
}
void BicolorLed::red() {
  digitalWrite(pinRed, HIGH);
  digitalWrite(pinGreen, LOW);
}
void BicolorLed::green() {
  digitalWrite(pinRed, LOW);
  digitalWrite(pinGreen, HIGH);
}
void BicolorLed::orange() {
  digitalWrite(pinRed, HIGH);
  digitalWrite(pinGreen, HIGH);
}
