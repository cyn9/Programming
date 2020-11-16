import matplotlib as mpl
import matplotlib.pyplot as plt
import numpy as np

mpl.rcParams['axes.linewidth'] = 1.5

x = np.linspace(0, 5, 11)
y = x ** 2

font1 = {'fontname' : 'Arial',
         'fontsize' : 12}


# Create figure object
fig = plt.figure()

ax = fig.add_axes([0.1, 0.1, 0.82, 0.82])
ax.plot(x, y)
ax.set_xlabel('x', **font1)
ax.set_ylabel('y', **font1)
ax.set_title('y = x^2', **font1)

plt.show()
