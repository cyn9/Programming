lowercase_name = "john doe"

uppercase_name = [ch.upper() for ch in lowercase_name]

print(lowercase_name)
print(uppercase_name)

friends = ["ashley", 
		   "matt", 
		   "perry"]

uc_fr = [name.upper() for name in friends]
uc_fr_2 = [name[0].upper() for name in friends]
uc_fr_3 = [name[0].upper() + name[1:] for name in friends] 

print(friends)
print(uc_fr)
print(uc_fr_2)
print(uc_fr_3)