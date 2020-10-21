# Function arguments : *args
# Returns a tuple of arguments

def sumAllNums(*args):
	return sum(args)

# print(sumAllNums(4, 6, 9, 4, 10))
# print(sumAllNums(4, 6))

# Function arguments : **kwargs
# Returns a dictionary of arguments

def printFavColors(**kwargs):
	for key in kwargs:
		print(f"{key}'s favorite color is {kwargs[key]}.")

printFavColors(Ashley = "purple", Matt = "red", Danny = "teal")
printFavColors(Ashley = "purple", Matt = "red", Danny = "teal", Ted = "blue")
