def return_day(num):
	week = {1: "Sunday", 2: "Monday",3: "Tuesday", 4: "Wednesday", 5: "Thursday", 6: "Friday", 7: "Saturday"}

	day = week.get(num)	
	if day:
	    return day
	return None

print(return_day(2))
