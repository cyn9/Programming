user_info = dict(
	name 	= "John Doe",
	isOwner = True,
	favLang	= "C/C++",
	sex 	= "Male",
	age 	= 40
)

print("age" in user_info)	# Check if user_info has "age" property
print("phone" in user_info)	# Check if user_info has "phone" property

# in looks at only the keys
# To check the values, use in with the user_info.values()

print(40 in user_info.values())		# True
print(False in user_info.values())	# False

