str_emoji = "\U0001f600"

N = 1
while N < 11:
	print(str_emoji * N)
	N += 1

print()

for i in range(11):
	for j in range(i):
		print(str_emoji, end = "")

	print()

print()

for i in range(11):
	print(str_emoji * i)

print()