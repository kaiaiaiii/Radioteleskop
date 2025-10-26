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
