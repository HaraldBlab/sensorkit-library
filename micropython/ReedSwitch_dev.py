from machine import Pin
from time import sleep

#Wemos D1 mini
# digitalpins
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

from Sensorkit.ReedSwitch import ReedSwitch

switch = ReedSwitch(D1)
while True:
  print(switch.open(), switch.closed())
  sleep(0.5)

    