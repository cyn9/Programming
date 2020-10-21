age = input("Enter your age >> ")

try:
	age = int(age)
	if 18 <= age < 21:
		print("You can enter, but need a wristband.")
	elif age >= 21:
		print("You can enter and can drink.")
	else:
		print("You cannot come in.")
except ValueError:
	print("Please enter an integer.")