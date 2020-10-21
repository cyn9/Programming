# Regular function
def squareFunc(num) : return num**2

# Square wtih lambda
square = lambda num : num**2

print(square(9))

# Addition with lambda
add = lambda a, b : a + b

print(add(3, 5))

# __name__ property for functions and lambdas
print(squareFunc.__name__)	# squareFunc
print(square.__name__)		# <lambda>
