locations = {
	(35.6895, 39.6917)	:	"Tokyo Office",
	(40.7128, 74.0060)	:	"New York Office",
	(37.7749, 122.4194)	:	"San Francisco Office"
}

for t in locations:
	office = locations[t]
	x, y = t[0], t[1]
	print(f"The coordinates of {office} are {x}, {y}.")
