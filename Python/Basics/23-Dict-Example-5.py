from random import choice
food = choice(["cheese pizza", 
			   "quiche",
			   "morning bun", 
			   "gummy bear", 
			   "tea cake"])

bakery_stock = {
    "almond croissant" 		 : 12,
    "toffee cookie"			 : 3,
    "morning bun"			 : 1,
    "chocolate chunk cookie" : 9,
    "tea cake"				 : 25
}

print(food)

v = bakery_stock.get(food)

if food in bakery_stock:
	print(f"{v} left")
else:
	print("We don't make that")