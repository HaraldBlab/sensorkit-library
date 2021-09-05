#ifndef ReedSwitch_h
#define ReedSwitch_h

#include <Arduino.h>

// A Reed switch
class ReedSwitch {
public:
  int pinSwitch = 4;
  ReedSwitch(int pin);
  void setup();
  int open();
  int closed();
};

#endif
