import serial
serialMsg = serial.Serial("/dev/ttyACM1", 9600, timeout=1)

while True:
    serialMsg.write(b'7')
