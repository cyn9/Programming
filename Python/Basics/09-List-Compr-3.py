# # # # # # # # # # # # # # # # # # # # # # #
# List comprehension with conditional logic #
# # # # # # # # # # # # # # # # # # # # # # #
nums = list(range(1, 7))

evenNums = [num for num in nums if (num % 2 == 0)]
oddNums  = [num for num in nums if (num % 2 != 0)]

print(nums)
print(evenNums)
print(oddNums)

myNumList = [num*2 
			 if num % 2 == 0
			 else num / 2 
			 for num in nums]

print(myNumList)

# # # # # # # # # # # # # # # # # # # # # # #
# List comprehension with conditional logic #
# # # # # # # # # # # # # # # # # # # # # # #
vowels = "aeiou"
sentence = "This is so much fun!"
no_vowel_sentence = "".join([char for char in sentence 
						          if char not in vowels])

print(sentence)
print(no_vowel_sentence)
