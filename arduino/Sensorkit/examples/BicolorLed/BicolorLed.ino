#include <BicolorLed.h>

BicolorLed sensor(5, 6);

void setup() {
  sensor.setup();
}

void loop() {
  sensor.off(); delay(500);
  sensor.red(); delay(500);
  sensor.green(); delay(500);
  sensor.orange(); delay(500);
}
