import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 5, 11)
y = x ** 2

plt.plot(x, y, 'r')

plt.xlabel('x')
plt.ylabel('y')
plt.title('y = x^2')

plt.show()
