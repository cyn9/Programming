friends = ["Ashley", "Meggie", "Matt"]
num = len(friends)

try:
	for i in range(num):
		print(friends[i])

except IndexError:
	print("Tried to reach out of bounds.")

#
# Check if the data is present in the list using <in>:
#
print("Is Ashley in list 'friends'? ", end = "")
print("Ashley" in friends)
print("Is Jimmy in list 'friends'? ", end = "")
print("Jimmy" in friends)
