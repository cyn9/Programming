# # # # # # # # # # # # # # # # # # # # # # # 
# Dictionary methods: pop, popitems, update #
# # # # # # # # # # # # # # # # # # # # # # # 

# # # # #
# pop() #
# # # # #
d1 = dict(
	a = 1,
	b = 2,
	c = 3
)

print(d1)
d1.pop("a")		# Removes the entry 'a', return the value
print(d1)

try:
	d1.pop("e")
except:
	print("KeyError >> Key <e> is not found.")

# # # # # # #
# popitem() #
# # # # # # #

# Removes a random key in a dictionary
d2 = dict(
	a = 1,
	b = 2,
	c = 3,
	d = 4,
	e = 5
)

print(d2)
d2.popitem()
print(d2)

# # # # # # #
# update()  #
# # # # # # #

# Merges two dictionaries or overwrite data in the dictionary
user_info = dict(
	name 	= "John Doe",
	isOwner = True,
	favLang	= "C/C++",
	sex 	= "Male",
	age 	= 40
)

person = dict(city = "Boston", 
			  phone = "5551234567")

person.update(user_info)
print(person)

user_info.update(person)
print(user_info)
