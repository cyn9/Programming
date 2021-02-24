import numpy as np
from computeCost import computeCost

def gradientDescent(X, y, theta, alpha, num_iters):
    # Initialize number of training sample size
    m = len(y)

    # Initialize cost function history array
    J_hist = np.zeros((num_iters, 1))

    iter_range = range(num_iters)
    X_1 = X[:,1]
    X_1 = X_1.reshape(m, 1)

    for i in iter_range:
        h_theta = np.matmul(X, theta)
        diffr = h_theta - y

        temp0 = theta[0, 0] - (alpha/m) * np.sum(diffr)
        temp1 = theta[1, 0] - (alpha/m) * np.sum(np.multiply(diffr, X_1))

        theta[0, 0] = temp0
        theta[1, 0] = temp1

        J_hist[i] = computeCost(X, y, theta)

        # print(f"theta_0 = {theta[0, 0]:.3f}  ,  theta_1 = {theta[1, 0]:.3f}  ,  J = {J_hist[i]}:.3f.")
    
    return theta, J_hist
