import serial

port = 'COM3'
baudrate = 230400
bytesize = serial.EIGHTBITS
parity = serial.PARITY_NONE
stopbits = serial.STOPBITS_ONE
ser = serial.Serial(port=port, baudrate=baudrate, bytesize=bytesize, parity=parity, stopbits=stopbits)

fileHandler = open("AccData.txt", "w")
fileHandler.write("X\tY\tZ\n")

try: 
    while True:    
        fileHandler.write(ser.readline().decode('ascii'))
                    
except KeyboardInterrupt:
    fileHandler.close()
    ser.close()