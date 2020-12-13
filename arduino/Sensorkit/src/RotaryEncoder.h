#ifndef ROTARYENCODER_H
#define ROTARYENCODER_H

#include <Arduino.h>

class RotaryEncoder {
  public:
  int Position = 0;
  int Switch = LOW;
  RotaryEncoder(int clk, int dt, int sw);
  void setup();
  bool read();
  private:
  int DT = 6;
  int CLK = 5;
  int SW = 7;
  int n = LOW;
  int Last_Position = LOW;
  int Last_Switch = LOW;
};

#endif
