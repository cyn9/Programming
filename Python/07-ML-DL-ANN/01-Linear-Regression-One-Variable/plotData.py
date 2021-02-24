import matplotlib.pyplot as plt
import numpy as np

def plotData(X, y):
    plt.plot(X, y, '+r')

    plt.xlabel('Population (in $10000s)')
    plt.ylabel('Profit (in 10000s)')
    plt.title('Population vs. Profit')

    plt.show()
