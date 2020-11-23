import numpy as np

# Setting number printing precision:
np.set_printoptions(precision = 3)

# Using array() to create vectors/matrices:
num1 = [1, 2, 3]
arr1 = np.array(num1)
print(arr1)
print(type(arr1))

num2 = [ [1, 2, 3], [4, 5, 6], [7, 8, 9] ]
arr2 = np.array(num2)
print(arr2)
print(type(arr2))

# Using arange(start, stop, step) --> integer outputs:
arr3 = np.arange(1, 12)
print(arr3)

# Using zeros(N):
arr4 = np.zeros(5)
print(arr4.astype(int))

# Using zeros(tuple):
arr5 = np.zeros((3, 2)) # 3x2 matrix
print(arr5)

# Using ones(N):
arr6 = np.ones(4)
print(arr6.astype(int))

# Using linspace(start, stop, # of elements):
arr7 = np.linspace(0, 10, 12)
print(arr7)

# Identity matrix using eye(N):
arr8 = np.eye(5)
print(arr8.astype(int))