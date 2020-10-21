import random

rnd_num = random.randint(1, 10)
user_input = "Y"
user_guess = -1

while user_input != "N":
	user_guess = int(input("Guess a number between 1 and 10 >> "))

	while user_guess != rnd_num:
		print("Low, try again." if user_guess < rnd_num else "High, try again.")
		user_guess = int(input("Guess a number between 1 and 10 >> "))

	print("You guessed it. You won!")
	user_input = input("Do you want to keep playing? (Y/N) ").capitalize()
