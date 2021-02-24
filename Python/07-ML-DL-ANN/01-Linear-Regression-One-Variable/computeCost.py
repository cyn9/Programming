import numpy as np

def computeCost(X, y, theta):
    # Number of test samples
    m = len(y)

    # Initialize cost function J
    J = 0

    # Calculate prediction matrix
    h_theta = np.matmul(X, theta)

    # Calculate squared errors
    sqrErr = np.power(h_theta - y, 2)

    # Calculate the cost function
    J = (1 / (2*m)) * np.sum(sqrErr)

    return J
