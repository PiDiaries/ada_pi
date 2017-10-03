# ada_pi

Using the Adafruit Feather 32u4 Bluefruit and a Pi Zero 

Code to upload arduino hex to feather over GPIO

sudo avrdude -p atmega32u4 -C ~/avrdude_gpio.conf -c pi_1 -v -U flash:w:/path/to/pre-compiled/hex/file
