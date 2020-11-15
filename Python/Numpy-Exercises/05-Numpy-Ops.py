import numpy as np

np.set_printoptions(precision = 3)

A = np.arange(1, 11)


# Basic element-by-element operations:
print(A + 10, end = "\n\n")
print(A + A, end = "\n\n")
print(4*A, end = "\n\n")
print(A**3, end = "\n\n")


# Some basic functions:
# Universal functions (ufuncs) --> https://numpy.org/doc/stable/reference/ufuncs.html
print(np.sqrt(A), end = "\n\n")
print(np.exp(A), end = "\n\n")
print(np.max(A), end = "\n\n")
print(np.cos(A), end = "\n\n")
print(np.log10(A), end = "\n\n")


# Sum of all elements in a matrix:
B = np.arange(1, 26).reshape(5, 5)
print(B.sum())


# Calculate the standard deviation in a matrix:
print(B.std())
