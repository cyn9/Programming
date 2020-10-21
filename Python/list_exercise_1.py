import random
from random import randint
from datetime import datetime
# # # # # # # # # # # # # # # # # # # # # # # # #
# Python program to sum all the items in a list #
# # # # # # # # # # # # # # # # # # # # # # # # #
myList1 = list(range(1, 11))
print(myList1)

sum = 0

for i in range(len(myList1)):
	sum += myList1[i]

print(f"Sum of all elements = {sum}.")

# # # # # # # # # # # # # # # # # # # # # # # # # #
# Python program to multiply all items in a list  #
# # # # # # # # # # # # # # # # # # # # # # # # # #
result = 1

for i in range(len(myList1)):
	result *= myList1[i]

print(f"Product of all elements = {result}.\n")

# # # # # # # # # # # # # # # # # # # # # # # # # # # #
# Python program to find the largest number in a list #
# # # # # # # # # # # # # # # # # # # # # # # # # # # #
random.seed(datetime.now())

myList2 = []
lowerLimit, upperLimit = 0, 30
largestNum = upperLimit
smallestNum = upperLimit

for i in range(1, 11):
	rndNum = random.randint(lowerLimit, upperLimit)
	myList2.append(rndNum)
	if rndNum > largestNum:
		largestNum = rndNum

	if rndNum < smallestNum:
		smallestNum = rndNum

print(myList2)
print(f"The largest number in the list is {largestNum}.")
print(f"The smallest number in the list is {smallestNum}.\n")
