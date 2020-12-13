#include "RotaryEncoder.h"

RotaryEncoder::RotaryEncoder(int clk, int dt, int sw) {
  CLK = clk;
  DT = dt;
  SW = sw;
}
void RotaryEncoder::setup() {
  pinMode (CLK, INPUT_PULLUP);
  pinMode (DT, INPUT_PULLUP);
  pinMode (SW, INPUT_PULLUP);
}
bool RotaryEncoder::read() {
  bool value = false;
  n = digitalRead(CLK);
  Switch = !digitalRead(SW);
  if (Switch != Last_Switch){
    value = true;
    delay(10);
    Last_Switch = Switch;
  }
  if ((Last_Position == LOW) && (n == HIGH)) {
    if (digitalRead(DT) == LOW) {
      Position++;
    } else {
      Position--;
    }
    value = true;
  }
  Last_Position = n;
  return value;
}
