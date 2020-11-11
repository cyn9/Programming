#
# Passing functions to another functions as a parameter
#
def add(a, b):
	return a + b

def subtract(a, b):
	return a - b

def math(a, b, func = add):
	return func(a, b)

print(add(2, 3))			# 5
print(subtract(5, 7))		# -2
print(math(3, 3, subtract))	# 0
print(math(2, 7))			# 9