#
# Usage of index, count, reverse and join
# index   >> returns the index of the specified item in the list
# count   >> number of times x appears in the list
# reverse >> reverse the elements of the list in place
# sort    >> sort the items of the list (descending order)
# join    >> concatenate a copy of the base string between each item in the list
#

numbers = [5, 5, 6, 7, 5, 8, 8, 9, 10]
print(numbers.index(6))         # fetch only the index of 6
print(numbers.index(5, 2))      # start from index = 2
print(numbers.index(8, 6, 8))   # start from index = 6, end at index = 8

print(f"Number of times 5 appears in the list is {numbers.count(5)}.")
# print("Number of times {} appears in the list is {}.".format(5, numbers.count(5)))

print(numbers)
numbers.reverse()
print(numbers)

numbers.sort()
print(numbers)

words = ["Hello,", "world.", "Coding", "is", "fun."]
myString = " "
myString = myString.join(words)
print(myString)
