from machine import Pin

# A 4 button capactive keypad
class Ttf24Keypad():
  def __init__(self, DETECT1, DETECT2, DETECT3, DETECT4):
    global pinDetect1, pinDetect2, pinDetect3, pinDetect4  
    pinDetect1 = Pin(DETECT1, Pin.IN)
    pinDetect2 = Pin(DETECT2, Pin.IN)
    pinDetect3 = Pin(DETECT3, Pin.IN)
    pinDetect4 = Pin(DETECT4, Pin.IN)
  def button1(self):
    return pinDetect1.value()
  def button2(self):
    return pinDetect2.value()
  def button3(self):
    return pinDetect3.value()
  def button4(self):
    return pinDetect4.value()
