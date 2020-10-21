print("... Rock ...")
print("... Paper ...")
print("... Scissors ...")

p1 = input("Player 1 : Enter your move >> ")

for x in range(25):
	print("... NO CHEATING ...")

p2 = input("Player 2 : Enter your move >> ")

if (p1 == "Rock" and p2 == "Scissors"):
	print("Player 1 wins...")
elif (p1 == "Rock" and p2 == "Paper"):
	print("Player 2 wins...")
elif (p1 == "Paper" and p2 == "Rock"):
	print("Player 1 wins...")
elif (p1 == "Paper" and p2 == "Scissors"):
	print("Player 2 wins...")
elif (p1 == "Scissors" and p2 == "Rock"):
	print("Player 2 wins...")
elif (p1 == "Scissors" and p2 == "Paper"):
	print("Player 1 wins...")
elif (p1 == p2):
	print("Draw...")
else:
	print("Something went wrong...")