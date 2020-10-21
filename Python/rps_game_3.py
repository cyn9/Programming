import random

rpsList = ["rock", "paper", "scissors"]

print("... Rock ...")
print("... Paper ...")
print("... Scissors ...")

p1 = input("Enter your move >> ").lower()
p2 = random.choice(rpsList)

print("*" * 20)
print(f"Player 1 >> {p1.capitalize()}")
print(f"Player 2 >> {p2.capitalize()}")
print("*" * 20)

if p1 == p2:
	print("Draw...")
elif (p1 == "rock" and p2 == "scissors") or \
     (p1 == "paper" and p2 == "rock")    or \
     (p1 == "scissors" and p2 == "paper"):
    print("Player 1 wins...")
else:
	print("Computer wins...")