import numpy as np
import matplotlib.pyplot as plt

fileHandler = open("AccData_.txt", "r")


sampleFreq = 416
SampleLength = sampleFreq // 2
samplePeriod = 1/sampleFreq
X = np.asarray([])
Y = np.asarray([])
Z = np.asarray([])
zTemp = np.asarray([])
W = np.zeros(SampleLength//2)
Wmean = np.asarray([])
line = fileHandler.readline()#Desechamos la primera línea de cabecera
line = fileHandler.readline()#Desechamos la segunda línea por su hubiera datos erróneos.
nSample = 0
i = 0
try:
    while line:
        line = fileHandler.readline()
        lineSplit = line.split('\t')
        i = i+1
        if not i % 50000:
            print("Línea:",i)
        try:
            X = np.append(X,int(lineSplit[0]))
            Y = np.append(Y,int(lineSplit[1]))
            Z = np.append(Z,int(lineSplit[2]))
            zTemp = np.append(zTemp,int(lineSplit[2]))

        except:
            print("\nError leyendo la linea")
        
    #     nSample = nSample + 1
    #     if nSample == SampleLength:
            
    #         Weights = np.fft.fft(zTemp)
    #         Weights = Weights.real[:Weights.real.shape[0]//2]
    #         W = np.vstack([W,Weights])
    #         nSample = 0
    #         freqs = np.fft.fftfreq(np.shape(zTemp)[0],samplePeriod)
    #         zTemp = np.asarray([])
    # W = W[1:,:]
    # freqs = freqs[:freqs.shape[0]//2]
    
    
    #for i in range(W.shape[1]):
    #    Wmean = np.append(Wmean,np.mean(W[:,i]))
   
        
        
    nSamples =  np.arange(np.shape(Z)[0])
    fig, ax = plt.subplots()
    ax.plot(nSamples, X,nSamples, Y,nSamples, Z)
    ax.grid()
    plt.show()
    # fig, ax = plt.subplots()
    # ax.plot(freqs, Weights2.real,freqs, Weights.real)
    # ax.grid()
    # plt.show()
    
except KeyboardInterrupt:
    fileHandler.close()

plt.subplots()
plt.plot(freqs3[:Weights2.shape[0]//2],Weights2[:Weights2.shape[0]//2])
plt.grid()
plt.show()


plt.subplots()
plt.plot(nSamples[750000:800000],MOD_Nog[750000:800000])
plt.grid()
plt.show()
