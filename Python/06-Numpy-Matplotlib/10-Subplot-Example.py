import matplotlib as mpl
import matplotlib.pyplot as plt
import numpy as np

mpl.rcParams['toolbar'] = 'None'

x = np.linspace(0, 2*np.pi, 100)
y1 = np.sin(x)
y2 = np.cos(x)

fig, axes = plt.subplots(nrows = 1, ncols = 2, figsize = (6, 3), dpi = 100)

axes[0].plot(x, y1, 'b')
axes[0].set_title('Sine function')

axes[1].plot(x, y2, 'b')
axes[1].set_title('Cosine function')

plt.tight_layout()

fig.savefig('Test_Figure.png', dpi = 600)

plt.show()
