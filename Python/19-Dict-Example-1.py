# # # # # # # # # # # # # # # # # # 
# Create a dictionary (method 1)  #
# # # # # # # # # # # # # # # # # # 
cat = {
	"Name"	 : "Blue",
	"Age"	 : 3,
	"isCute" : True
}

print(cat)

# # # # # # # # # # # # # # # # # # 
# Create a dictionary (method 2)  #
# # # # # # # # # # # # # # # # # #
cat2 = dict(
	name	= "Kitty",
	age	 	= 2,
	isCute 	= True	
)

print(cat2)

# # # # # # # # # # # # # # # # 
# Accessing dictionary values #
# # # # # # # # # # # # # # # #
user_info = dict(
	name 	= "John Doe",
	isOwner = True,
	favLang	= "C/C++",
	sex 	= "Male",
	age 	= 40
)

print(f"Name of the user is {user_info['name']}.")

try:
	print(f"Name of the user is {user_info['owns_dog']}.")
except KeyError:
	print("Key 'owns_dog' is not found.")

for key in user_info:
	print(f"{key.capitalize()} is {user_info[key]}.")

for v in user_info.keys():
	print(f"{v.capitalize()} is {user_info[v]}.")

# user_info.values()	: list of the values in the dict
# user_info.keys()		: list of the keys in the dict
# user_info.items()		: list of the keys and values together

for (key, v) in user_info.items():
	print(f"The key is \"{key}\" and the value is \"{v}\".")
