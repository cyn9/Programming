# "global" keyword example

total = 0

def increment():
	global total
	total += 1
	return total

print(increment())

# "nonlocal" keyword example

def outerFunc():
	count = 0

	def innerFunc():
		nonlocal count
		count += 1
		return count

	return innerFunc()

print(outerFunc())


def sayHello():
	"""A simple function that prints the string 'Hello'."""
	print("Hello.")

sayHello()
print(sayHello.__doc__)		# A way to print the docfile of a function
