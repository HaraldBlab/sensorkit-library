int SensorPin = 7;

#include "Dht11Sensor.h"

Dht11Sensor sensor(SensorPin);

void setup() {
  Serial.begin(115200);
  sensor.setup();
}

void loop() {
  float humidity = sensor.humidity();
  float temperature = sensor.temperature();
  Serial.print("Humidity: "); Serial.print(humidity); Serial.println("%");
  Serial.print("Temperature: "); Serial.print(temperature); Serial.println("°C");
    
  delay(1000);
 }
