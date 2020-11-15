set_mathClass = {"Matthew", "Helen", "James", "Perry", "Aparna"}
set_biologyClass = {"Jane", "Matthew", "Charlotte", "Oliver", "James", "Mindy"}

# All of the students without any duplicates
s1 = set_mathClass | set_biologyClass
print(s1)

# Set intersection
s2 = set_mathClass & set_biologyClass
print(s2)
