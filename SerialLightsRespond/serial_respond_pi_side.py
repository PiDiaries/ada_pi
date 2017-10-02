import serial
serialMsg = serial.Serial("/dev/serial0", 9600, timeout=1)

while True:
    serialMsg.write(b'7')
