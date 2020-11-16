import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 5, 11)

plt.subplot(1, 2, 1)
plt.plot(x, x ** 2)

plt.subplot(1, 2, 2)
plt.plot(x, x ** 3)

plt.show()
