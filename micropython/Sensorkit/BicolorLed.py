from machine import Pin
# A bicolor red and green led (with 3 colors and 4 states)
class BicolorLed():
    def __init__(self, RED, GREEN):
        global pinRed, pinGreen
        pinRed = Pin(RED, Pin.OUT)
        pinGreen = Pin(GREEN, Pin.OUT)
    def off(self):
        pinRed.off()
        pinGreen.off()
    def red(self):
        pinRed.on()
        pinGreen.off()
    def green(self):
        pinRed.off()
        pinGreen.on()
    def orange(self):
        pinRed.on()
        pinGreen.on()
