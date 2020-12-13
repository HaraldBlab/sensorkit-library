int DT = 6;
int CLK = 5;
int SW = 7;

#include <RotaryEncoder.h>

RotaryEncoder sensor(CLK, DT, SW);

void setup() {
  Serial.begin (115200);
  sensor.setup();
}

void loop() {
  if (sensor.read()) {
    Serial.print (sensor.Position);
    Serial.print ("|");
    Serial.println (sensor.Switch);
  }
}
