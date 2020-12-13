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
# Arduino settings
LOW = 0
HIGH = 1

from Sensorkit.RotaryEncoder import RotaryEncoder

# setup
# connections to board
CLK = D1
DT = D2
SW = D3 # can be an interrupt pim
sensor = RotaryEncoder(CLK, DT, SW)
#loop
while True:
  if sensor.value():
    print(sensor.Position, "|", sensor.Switch)
    