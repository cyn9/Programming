#
# Usage of append, extend and insert
#
myList = [1, 2, 3, 4]
myList.append(5)

for item in myList:
	print(item, end = " ")

print()

myList.append("John")

for item in myList:
	print(item, end = " ")

print()

myList.extend([5, 6, 7, 8, "Doe"])

for item in myList:
	print(item, end = " ")

print()

myList.insert(2, "Hi!")
myList.insert(len(myList), "The end...")

for item in myList:
	print(item, end = " ")

print()
