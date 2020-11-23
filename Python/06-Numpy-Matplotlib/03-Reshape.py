import numpy as np

np.set_printoptions(precision = 3)

arr = np.arange(25)
randArr = np.random.randint(0, 50, 10)

print(arr)
print(randArr)

# Reshape 1x25 vector to 5x5 matrix:
# reshape(ROWS, COLS)
m1 = arr.reshape(5, 5)
print(m1)

# Max/min values of an array:
print(randArr.max())
print(randArr.min())

# Index locations of max/min values:
print(randArr.argmax())
print(randArr.argmin())

# Shape of a vector/matrix using .shape :
print(arr.shape)
print(m1.shape)

# Array data type using .dtype :
print(arr.dtype)
print(m1.dtype)
