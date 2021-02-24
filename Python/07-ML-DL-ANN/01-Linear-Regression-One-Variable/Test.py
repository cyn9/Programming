'''
    @ author        cico
    @ date          02/24/21
    @ time          1:01 PM
    @ description   Linear regression with one variable
                    x : population size (in 10000s)
                    y : profit (in $10000s)
'''

from plotData import plotData
from computeCost import computeCost
from gradientDescent import gradientDescent

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

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

# Plot history of cost function:
J_hist_range = range(iterations)
plt.figure(1)
plt.plot(J_hist_range, J_hist)

# Plot the linear fit and data
plt.figure(2)
plt.plot(X[:,1].reshape(m, 1), y, '+r')

plt.xlabel('Population (in $10000s)')
plt.ylabel('Profit (in 10000s)')
plt.title('Population vs. Profit')

plt.plot(X[:,1].reshape(m, 1), np.matmul(X, theta), '-')

plt.show()

# Predict values for population sizes of 35000 and 70000
pred1 = np.matmul(np.array([[1], [3.5]]).T, theta).squeeze() * 10000
pred2 = np.matmul(np.array([[1], [7.0]]).T, theta).squeeze() * 10000

print(f"For a population of 35000, the predicted profit is ${pred1:.2f}.")
print(f"For a population of 70000, the predicted profit is ${pred2:.2f}.")
