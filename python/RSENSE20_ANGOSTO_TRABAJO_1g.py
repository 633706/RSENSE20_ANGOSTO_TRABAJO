import numpy as np
import matplotlib.pyplot as plt

fileHandler = open("AccData1g.txt", "r")

X = np.asarray([])
Y = np.asarray([])
Z = np.asarray([])
MOD = np.asarray([])
fft_result = np.asarray([])
line = fileHandler.readline()#Desechamos la primera línea de cabecera
line = fileHandler.readline()#Desechamos la segunda línea por su hubiera datos erróneos.


try:
    while line:
        line = fileHandler.readline()
        lineSplit = line.split('\t')
        try:
            X = np.append(X,int(lineSplit[0]))
            Y = np.append(Y,int(lineSplit[1]))
            Z = np.append(Z,int(lineSplit[2]))

        except:
            print("Error leyendo la linea")
                
    nSamples =  np.arange(np.shape(Z)[0])
    fig, ax = plt.subplots()
    ax.plot(nSamples, X,nSamples, Y,nSamples, Z)
    ax.grid()
    plt.show()
    MOD = np.sqrt(X*X+Y*Y+Z*Z)
    print("Valor medio de 1g:",np.mean(MOD))

    
except KeyboardInterrupt:
    fileHandler.close()
