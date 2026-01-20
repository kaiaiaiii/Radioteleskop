import numpy as np
import matplotlib.pyplot as plt

# Daten auslesen 
k = np.arange(3)
magnitude = [2.1097, 1.3146, 0.5844]
phase = [-2.076, 2.081, 2.589]

# Magnitude Plot
plt.figure()
plt.stem(k, magnitude, use_line_collection=True)
plt.xlabel("Frequenzindex k")
plt.ylabel("|X[k]|")
plt.title("Magnitude-Spektrum")
plt.grid(True)

# Phase Plot
plt.figure()
plt.stem(k, phase, use_line_collection=True)
plt.xlabel("Frequenzindex k")
plt.ylabel("Phase [rad]")
plt.title("Phasen-Spektrum")
plt.grid(True)

plt.show()


'''
import pyvista as pv
#import numpy as np
import os
import glob
import matplotlib.pyplot as plt

filepath= 'C:/Privat/Radioteleskop/DFT.txt'
Data = []
frequency = []
amplitude = []
ctr =0 

with open(filepath) as file:
    print
    for line in file:
        ctr += 1
        
        
print(ctr)
    
plt.figure(figsize=(10, 5))
#plt.plot(time_steps, vel_center, label='Zentrum', marker='o', color='orange')
#plt.plot(time_steps, surf_F, label='Surface Tension force', marker='o', color='blue')
plt.plot(time_steps, vel_edge, label='velocity_magnitude', marker='o', color='grey')
plt.xlabel("Zeitschritt")
plt.ylabel("Geschwindigkeit [m/s]")
plt.title("Partikelgeschwindigkeit über die Zeit (ID-basiert)")
plt.grid(True)
plt.legend()
plt.tight_layout()
plt.show()
