RANGE_LOWER = 1
RANGE_UPPER = 20

for i in range(RANGE_LOWER, RANGE_UPPER+1):
	if (i == 4 or i == 13):
		state = "unlucky"
	elif (i % 2 == 0):
		state = "even"
	else:
		state = "odd"

	print(f"{i} is {state}")
