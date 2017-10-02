import serial

serialMsg = serial.Serial("/dev/ttyACMO", 9600, timeout=1)

while True
    rawMsgh = serialMsg.readline()
    message = (rawMsg.decode().strip())
    if (message == "Motion detected!"):
        print("Arduino says: Motion detected!")
