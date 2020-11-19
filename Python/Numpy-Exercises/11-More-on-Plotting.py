import matplotlib as mpl
import matplotlib.pyplot as plt
import numpy as np

mpl.rcParams['toolbar'] = 'None'
mpl.rcParams['axes.linewidth'] = 2.5
mpl.rcParams["font.family"] = 'Arial'
mpl.rcParams["font.size"] = 12
mpl.rcParams["font.weight"] = 'bold'

x = np.linspace(0, 4*np.pi, 100)

y1 = np.sin(x)
y2 = np.sin(2*x)

fig = plt.figure(linewidth = 3)

ax = fig.add_axes([0.15, 0.15, 0.8, 0.8])
ax.plot(x, y1, 'b', linewidth = 2.25, label = 'sin(x)')
ax.plot(x, y2, 'k--', linewidth = 2.25, label = 'sin(2x)')

ax.set_title('Test', fontweight = 'bold')
ax.set_xlabel('t (sec)', fontweight = 'bold')
ax.set_ylabel('Amplitude (V)', fontweight = 'bold')

ax.set_xlim([0, np.floor(max(x))])
ax.set_ylim([-1, 1])

plt.legend(loc = 'upper right', framealpha = 1, fancybox = False, fontsize = 9.5)

plt.xticks(np.arange(min(x), max(x), 2.0))
plt.yticks(np.arange(min(y1), max(y2), 0.5))

ax.grid(linestyle = ':', linewidth = 1.35)

fig.savefig('Test_Figure_2.png', dpi = 600)

plt.show()
