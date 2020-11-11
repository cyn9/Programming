nestedList = [[1,2,3], [4,5,6], [7,8,9]]

#
# Good ol' mighty nested loops
#
for i in range(0, 3):
	for j in range(0, 3):
		print(nestedList[i][j], end = " ")
	
	print("\n")

#
# Nested list comprehension 1
#

[[print(val, end = " ") for val in l] for l in nestedList]
print()

#
# Nested list comprehension 2
#

myList = [[x for x in range(0, 10)] for y in range(0, 10) ]
print(myList)
