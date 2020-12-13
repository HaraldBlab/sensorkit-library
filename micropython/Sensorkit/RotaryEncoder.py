from machine import Pin
from time import sleep
# rotary encoder sensor
class RotaryEncoder():
  Position = 0
  Switch = 0
  def __init__(self, CLK, DT, SW):
    global pinCLK, pinDT, pinSW
    pinCLK = Pin(CLK, Pin.IN, Pin.PULL_UP)
    pinDT = Pin(DT, Pin.IN, Pin.PULL_UP)
    pinSW = Pin(SW, Pin.IN, Pin.PULL_UP)
    global Last_Position
    Last_Position = 0
    global Last_Switch
    Last_Switch = 0
#
  def value(self):
    has_value = 0
    n = pinCLK.value()
    self.Switch = 1-pinSW.value()
    global Last_Switch
    if self.Switch != Last_Switch:
      has_value = 1
      sleep(0.1)
      Last_Switch = self.Switch
    global Last_Position 
    if (Last_Position == 0) and (n == 1):
      if pinDT.value() == 0:
        self.Position=self.Position+1
      else:
        self.Position=self.Position-1
      has_value = 1
    Last_Position = n
    return has_value
