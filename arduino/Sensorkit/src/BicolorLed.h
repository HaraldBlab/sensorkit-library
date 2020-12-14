#ifndef BICOLORLED_H
#define BICOLORLED_H

#include <Arduino.h>

class BicolorLed {
  private:
    int pinRed = 5;
    int pinGreen = 6;
  public:
    BicolorLed(int RED, int GREEN);
    void setup();
    void off();
    void red();
    void green();
    void orange();
};
#endif
