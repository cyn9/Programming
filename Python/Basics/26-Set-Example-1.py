# Creating a set
s1 = {1, 4, 5}

s2 = set({1, 2, 3, 4, 5, 6, 6, 6})

print(1 in s1)
print(3 in s2)
print(8 in s1)

print(s1)
print(s2)

# Eliminating the duplicates
cities = ["Los Angeles", 
		  "Boulder", 
		  "Kyoto", 
		  "Florence", 
		  "Santiago", 
		  "Shanghai", 
		  "Boulder",
		  "San Francisco",
		  "Oslo",
		  "Tokyo",
		  "Kyoto"]

s_cities = set(cities)
l_cities = list(s_cities)

print(cities)
print(s_cities)
print(l_cities)

# Add items to the set 			: add()
# Remove items from the set		: remove()
# Remove all content of the set	: clear()
s3 = set({1, 2, 4, 5, 6, 10})
print(s3)

for i in list(range(1, 11)):
	s3.add(i)

print(s3)

for i in list(range(1, 11)):
	if (i % 2 != 0):
		s3.remove(i)

print(s3)

# Creating a copy of the set	: copy()

s4 = s3.copy()
print(s3 == s4)
print(s3 is s4)
