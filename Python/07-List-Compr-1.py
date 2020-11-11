nums = [1, 2, 3]

nums2 = [x*10 for x in nums]

print(nums)
print(nums2)

# Looping #
numbers = list(range(1, 6))
doubles = []

for num in numbers:
	doubles.append(num * 2)

print(numbers)
print(doubles)

# List comprehensions
myListDoubles = [2*x for x in numbers]

print(myListDoubles)