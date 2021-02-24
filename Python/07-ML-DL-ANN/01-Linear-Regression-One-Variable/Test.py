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
from computeCost import computeCost
from gradientDescent import gradientDescent

## =============== Part 1 : Data Loading =============== ##
print('Loading data ...')
df = pd.read_csv("data1.csv", header = None)
print('Data loaded ...')

X = df.iloc[:, 0]
y = df.iloc[:, 1]

## =============== Part 2 : Data Plotting ============== ##
# print('Plotting data ...')
# plotData(X, y)

m = len(y)

## ========= Part 3 : Cost and Gradient Descent ======== ##

# Create design matrix:
x0 = np.ones((m, 1))

X_n = X.to_numpy().reshape(len(X), 1)
y = y.to_numpy().reshape(len(X), 1)

X = np.concatenate((x0, X_n), axis = 1)

# Initialize theta vector:
theta = np.zeros((2, 1))

# Gradient descent settings:
iterations = 1500
alpha = 0.01

print('Testing the cost function ...')
J = computeCost(X, y, theta)
print(f"With theta = [0; 0],  J = {J:.3f}.")

theta_test_case = np.array([[-1], [2]])
J_test_case = computeCost(X, y, theta_test_case)
print(f"With theta = [-1; 2], J = {J_test_case:.3f}.")

# Run gradient descent:
theta, J_hist = gradientDescent(X, y, theta, alpha, iterations)

print("Theta found by the gradient descent and current cost: ")
print(f"theta_0 = {theta[0, 0]:.3f} , theta_1 = {theta[1, 0]:.3f} , J = {J_hist[iterations-1].squeeze():.3f}.")

