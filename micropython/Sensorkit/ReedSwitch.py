from machine import Pin
# a Reed switch sensor
class ReedSwitch():
  def __init__(self, SWITCH):
    global pinSwitch
    pinSwitch = Pin(SWITCH, Pin.IN, Pin.PULL_UP)
  def open(self):
    return pinSwitch.value()
  def closed(self):
    return 1-self.open()

