"""name = input("What is your name? >> ")

if name == "Arya Stark":
	print("Valas morghulis.")
elif name == "Jon Snow":
	print("You know nothing.")
elif name == "":
	print("You did not enter a name.")
else:
	print(f"Your name is {name}.")

if (name[0] == "C" and name[1] == "i"):
	print("It is Ci")

"""

from random import choice
food = choice( ['apple',
			    'grape', 
			    'bacon', 
			    'steak', 
			    'worm', 
			    'dirt'] )

if (food == "apple" or food == "grape"):
    print("fruit")
elif (food == "bacon" or food == "steak"):
    print("meat")
else:
    print("yuck")