import serial

serialMsg = serial.Serial("/dev/serial0", 9600, timeout=1)

while True:
    rawMsg = serialMsg.readline()
    message = (rawMsg.decode().strip())
    if (message == "Motion detected!"):
        print("Arduino says: Motion detected!")
