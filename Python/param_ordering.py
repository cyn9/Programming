def displayInfo(a, b, *args, instructor = "John", **kwargs):
	return [a, b, args, instructor, kwargs]

print(displayInfo(1, 2, 3, last_name = "Doe", job = "Instructor"))
