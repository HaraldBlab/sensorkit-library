from machine import Pin
from time import sleep

#Wemos D1 mini
# digital pins
D0 = 16 #
D1 = 5 #
D2 = 4 #
D3 = 0 #
_D4 = 1 # used internally
D5 = 14 #
D6 = 12 #
D7 = 13 #
D8 = 15 #
# I2C pins 
SCL = 5
SCA = 4
# analog pins
A0 = 0

from Sensorkit.FlameSensor import FlameSensor
sensor = FlameSensor(D2, A0)

while True:
  value = sensor.value()
  print("PotiValue", value);
  detect = sensor.detect()
  if detect == 1:
    print("Flame detected")
  else:
    print("Flame not detected")
  sleep(1.0)
