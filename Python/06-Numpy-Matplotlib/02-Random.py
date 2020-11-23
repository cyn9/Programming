import numpy as np

np.set_printoptions(precision = 3)

vec1 = np.random.rand(5)    # Uniform distribution
print(vec1, end = "\n\n")

arr1 = np.random.rand(3, 2) # Uniform distribution
print(arr1, end = "\n\n")

# Normal (or Gaussian) distribution
vec2 = np.random.randn(4)
print(vec2, end = "\n\n")

# randint() function
# randint(start, stop, # of random numbers):
print(np.random.randint(1, 100), end = "\n\n")
print(np.random.randint(1, 10, 3), end = "\n\n")
