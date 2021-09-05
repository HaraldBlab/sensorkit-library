#include "ReedSwitch.h"

ReedSwitch::ReedSwitch(int pin) { 
  pinSwitch = pin; 
}
void ReedSwitch::setup() {
  pinMode(pinSwitch, INPUT_PULLUP);
}
int ReedSwitch::open() { 
  return digitalRead(pinSwitch); 
}
int ReedSwitch::closed() {
  return 1 - open(); 
}
