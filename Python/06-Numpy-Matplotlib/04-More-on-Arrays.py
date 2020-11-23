import numpy as np

np.set_printoptions(precision = 3)

arr1 = np.arange(0, 11)


# Using slice notation:
print(arr1[1:5], end = "\n\n")
print(arr1[:3], end = "\n\n")
print(arr1[5:], end = "\n\n")


# Assign new value:
arr1[:5] = 20
print(arr1, end = "\n\n")


# Important array referencing while assigning:
# Not only the slice but also the original is changed.
arr2 = np.arange(0, 11)
sliceArr = arr2[:3]
sliceArr[:] = 49

print(arr2, end = "\n\n")


# Copying array so that the change in slice does not 
# affect the original:
arr3 = np.arange(0, 11)
copyArr = arr3.copy()
copyArr[:] = 49

print(arr3, end = "\n\n")


# Numpy array selection with double-bracket notation:
A = np.array([ [2, 4, 6], [3, 6, 9], [5, 10, 15] ])
print(A, end = "\n\n")

print(A[1][2], end = "\n\n")


# Numpy array selection with single-bracket notation:
print(A[1, 2], end = "\n\n")
print(A[:, 0], end = "\n\n")

print(A[1:, :2], end = "\n\n")


# Conditional selection to get boolean arrays:
B = np.arange(1, 11)
boolArray = (B > 5)
print(boolArray, end = "\n\n")

newArray = B[boolArray]
print(newArray, end = "\n\n")