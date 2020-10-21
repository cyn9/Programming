import random
from datetime import datetime

p1_count, p2_count = 0, 0
num_best_of = 5
thr_term = num_best_of//2 + 1
rpsList = ["rock", "paper", "scissors"]

random.seed(datetime.now())

print("... Rock ...")
print("... Paper ...")
print("... Scissors ...")
print(f"*** Best of {num_best_of} ***")

for turn in range(num_best_of):
	print(f"\n\nROUND {turn+1} : ")

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
	    print("Player wins...")
	    p1_count += 1
	else:
		print("Computer wins...")
		p2_count += 1

	print(f"Player Score: {p1_count}.")
	print(f"Computer Score: {p2_count}.")

	if p1_count == thr_term or p2_count == thr_term:
		break

print("\nRESULT: ", end = "")

if p1_count > p2_count:
	print("PLAYER WINS...")
elif p1_count < p2_count:
	print("COMPUTER WINS.")
else:
	print("IT'S A TIE...")