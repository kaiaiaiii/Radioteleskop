import numpy as np
import matplotlib.pyplot as plt

ZeilenVektor, Magnitudenvektor, Phasenvektor = [], [], []


with open("../SignalTransformation/Ergebnis.txt") as Daten:
    for line in Daten:
        ZeilenVektor = line.split()
        Magnitude = float(ZeilenVektor[1])
        Phase = float(ZeilenVektor[2])
        print(Phase)
        Magnitudenvektor.append(Magnitude)
        Phasenvektor.append(Phase)
    print(Phasenvektor)
k = np.arange(len(Magnitudenvektor)) ####

plt.figure()
plt.stem(Phasenvektor, k,use_line_collection=True)
plt.xlabel('Frequenzindex')
plt.ylabel('Phase')
plt.title('Phasenspektrum')
plt.grid(True)

plt.figure()
plt.stem(k, Magnitudenvektor,use_line_collection=True)
plt.xlabel('Frequenzindex')
plt.ylabel('Magnitude')
plt.title('Magnitudenspektrum')
plt.grid(True)

plt.show()
