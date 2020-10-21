# # # # # # # # # # # # 
# Dictionary methods  # 
# # # # # # # # # # # # 

# # # # # # # # # #
# clear() method: #
# # # # # # # # # # 
user_info = dict(
	name 	= "John Doe",
	isOwner = True,
	favLang	= "C/C++",
	sex 	= "Male",
	age 	= 40
)

user_info.clear()	# Clears the dictionary : user_info = {}

print(user_info)

# # # # # # # # #
# copy() method #
# # # # # # # # #

user_info = dict(
	name 	= "John Doe",
	isOwner = True,
	favLang	= "C/C++",
	sex 	= "Male",
	age 	= 40
)

newDict = user_info.copy()	# Makes a copy of a dictionary

print(user_info == newDict)	# True (same content)
print(user_info is newDict) # False (unique objects in memory)

# # # # # # # # # # #
# fromkeys() method #
# # # # # # # # # # #

# Generates key-value pairs from comma-separated values
# Generally used for creating dictionaries with default values

dict_1 = {}.fromkeys("a", "b")	# {'a': 'b'}
print(dict_1)

dict_2 = {}.fromkeys(["name", "isOwner", "favLang", "sex", "age"], "")
print(dict_2)

# # # # # # # # #
# get() method  #
# # # # # # # # #

# Retrieves the value of a key in the dictionary
# Throws KeyError if the key does not exist

v_age = user_info.get("age")
print(f"Age is {v_age}.")

if (user_info.get('isCarOwner') == None):
	print(f"Key <isCarOwner> is not found in <user_info>.")

