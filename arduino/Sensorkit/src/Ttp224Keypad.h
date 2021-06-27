#ifndef TTP224KEYPAD_H
#define TTP224KEYPAD_H

#include <Arduino.h>

/* 
 * A 4 button capacitive keypad.
 */
class Ttp224Keypad {
  int button1Pin = 2;
  int button2Pin = 3;
  int button3Pin = 4;
  int button4Pin = 5;
  public:
  Ttp224Keypad(int button1, int button2, int button3, int button4);
  void setup();
  bool button1();
  bool button2();
  bool button3();
  bool button4();
};

#endif
