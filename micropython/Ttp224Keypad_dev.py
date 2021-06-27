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

from Sensorkit.Ttf24Keypad import Ttf24Keypad
keypad = Ttf24Keypad(D1, D2, D5, D6)

while True:
  print("Button1", keypad.button1());
  print("Button2", keypad.button2());
  print("Button3", keypad.button3());
  print("Button4", keypad.button4());
  sleep(1.0)
