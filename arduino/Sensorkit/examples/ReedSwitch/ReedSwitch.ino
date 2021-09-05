#include <ReedSwitch.h>

ReedSwitch sensor(4);

void setup() {
  Serial.begin(115200);
  sensor.setup();
}

void loop() {
  Serial.print(sensor.open()); Serial.print(" "); Serial.println(sensor.closed());
  delay(500);
}
