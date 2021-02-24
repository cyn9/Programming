'''
    @ author        cico
    @ version       1.0
    @ date          02/23/21
    @ time          11:19 PM
    @ description   Linear regression with one variable
                    x : population size (in 10000s)
                    y : profit (in $10000s)
'''

import numpy as np
import pandas as pd
from plotData import plotData

df = pd.read_csv("data1.csv", header = None)

X = df.iloc[:, 0]
y = df.iloc[:, 1]

plotData(X, y)
