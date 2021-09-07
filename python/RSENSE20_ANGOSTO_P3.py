import serial
import matplotlib.pyplot as plt
import numpy as np

port = 'COM3'
baudrate = 230400
bytesize = serial.EIGHTBITS
parity = serial.PARITY_NONE
stopbits = serial.STOPBITS_ONE
ser = serial.Serial(port=port, baudrate=baudrate, bytesize=bytesize, parity=parity, stopbits=stopbits)

fileHandler = open("AccData.txt", "w")
fileHandler.write("X\tY\tZ\n")

AccsX = np.asarray([])
AccsY = np.asarray([])
AccsZ = np.asarray([])
try: 
    while True:
        line = ser.readline().decode('ascii')
        print(line,end='')
        #Acc_str = line.split()
        #AccX = int(Acc_str[0][5:])
        #AccY = int(Acc_str[1][5:])
        #AccZ = int(Acc_str[2][5:])
        #
        #fileHandler.write(str(AccX)+";"+str(AccY)+";"+str(AccZ)+"\n")
        #
        #AccsX = np.append(AccsX,AccX)
        #AccsY = np.append(AccsY,AccY)
        #AccsZ = np.append(AccsZ,AccZ)
            
except KeyboardInterrupt:
    fileHandler.close()
    fileHandler2.close()
    ser.close()