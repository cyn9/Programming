import numpy as np

np.set_printoptions(precision = 2)

print(np.zeros(10))
print(np.ones(10))

print(5 * np.ones(10))

print(np.arange(10, 51))
print(np.arange(10, 51, 2))

A = np.arange(0, 9).reshape(3, 3)
print(A)

print(np.eye(3))

print(f"Random number btw 0 and 1: {np.random.rand(1)}")

B = np.random.randn(25).reshape(5, 5)
print(B)

C1 = np.arange(1, 101).reshape(10, 10) / 100
print(C1)

C2 = np.arange(0.01, 1.01, 0.01).reshape(10, 10)
print(C2)

D = np.linspace(0, 1, 20)
print(D)
