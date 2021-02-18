int SensorPin = 7;
int PotiPin = A0;

#include <FlameSensor.h>

FlameSensor sensor(PotiPin, SensorPin);

void setup() {
  Serial.begin(115200);
  sensor.setup();
}

void loop() {
  int potiValue = sensor.value();
  Serial.println(potiValue, DEC);
  if(sensor.detect())
    Serial.println("Flame detected");
  else
    Serial.println("Flame not detected");
    
  delay(1000);
 }
