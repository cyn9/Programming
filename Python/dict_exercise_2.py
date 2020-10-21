#
# Exercise 1: Merge two Lists
#
list1 = ["CA", "NJ", "RI"]
list2 = ["California", "New Jersey", "Rhode Island"]

answer = {}

for key in list1:
	for value in list2:
		answer[key] = value
		break

# print(answer.values())

#
# Exercise 2: List to Dictionary
#
person = [["name", "Jared"], 
		  ["job", "Musician"], 
		  ["city", "Bern"]]

answer2 = {}

for list_item in person:
	tempList = list_item
	tempKey = tempList[0]
	tempVal = tempList[1]

	answer2.update({tempKey : tempVal})

#print(answer2)

#
# Exercise 2.1: List to Dictionary (simplest solution)
#
person = [["name", "Jared"], 
		  ["job", "Musician"], 
		  ["city", "Bern"]]

answer3 = dict(person)

#
# Exercise 3
#
vowels = ["a", "e", "i", "o", "u"]
ans = {vowels[i] : "0" for i in range(0, len(vowels))}

#print(ans)

#
# Exercise 4
#
keys = list(range(65, 91))
characters = [0] * len(keys)

for i in range(0, len(keys)):
	characters[i] = chr(keys[i])

ascii_chars = dict(zip(keys, characters))

print(ascii_chars)
