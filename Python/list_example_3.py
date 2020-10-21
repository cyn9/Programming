#
# Usage of clear, pop and remove
# clear  >> removes all items
# pop    >> removes the item at the given position in the list and returns
#		 >>	if no index specified then removes & returns the last item
# remove >> removes the first item from the list whose value is x
#        >> if item is not found then throws ValueError
#

myList = [1, 2, 3, 4, 5]
print(myList)
myList.clear()
print(myList)

myList = [1, 2, 3, 4, 5]
myList.pop()
print(myList)

myList = [1, 2, 3, 4, 5]
myList.pop(1)
print(myList)

first_item = myList.pop(0)
print(first_item)
print(myList)

myList.remove(4)
print(myList)

itemVal = 1
try:
	myList.remove(itemVal)
except:
	print(f"Error: Item {itemVal} is not found in the list.")
