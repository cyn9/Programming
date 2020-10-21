#
# Slicing   >> make new lists using slices of the old list
#           >> myList(start:end:step)
#           >> the value at the <end> index is exclusive
#

colors = ["Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet"]

print(colors[2:])   # start at index = 2, print until the end
print(colors[:4])   # start at index = 0, print until index = 4 (exclusive)
print(colors[1:3])  # start at index = 1, print until index = 3 (exclusive)

idx_orange = colors.index("Orange")
idx_blue = colors.index("Blue")

print(colors[idx_orange:idx_blue+1])    # print orange to blue (inclusive)

numbers = list(range(1, 21))
evenNumbers = numbers[1:21:2]
print(numbers)
print(evenNumbers)

# negative step >> reverses the order

nums = list(range(1, 10))
nums2 = nums[3::-1]
print(nums2)

# reversing strings
myString = "Hello, world."
print(myString[::-1])

# modification of portion of the list
nums3 = list(range(1, 10))
print(nums3)
nums3[1:3] = ["a", "b", "c"]
print(nums3)

# modification of an element in the list with slicing
colors = ["Red", "Orange", "Yellow", "Green", "Blue", "Indigo", "Violet"]
print(colors[4][::-1])  # reverses the string "blue"
