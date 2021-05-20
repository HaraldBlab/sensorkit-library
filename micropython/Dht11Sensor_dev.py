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

from Sensorkit.Dht11Sensor import Dht11Sensor
dhtSensor = Dht11Sensor(D5)

while True:
  temperature = dhtSensor.temperature()
  humidity = dhtSensor.humidity()
  # this format is used with the data provider
  print("Humidity:", humidity, "%")
  print("Temperature:", temperature, "°C")

  # every second we can measure a new value
  sleep(1.0)
