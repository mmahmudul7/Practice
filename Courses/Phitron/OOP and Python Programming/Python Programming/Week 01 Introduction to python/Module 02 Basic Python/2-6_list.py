# https://docs.python.org/3/tutorial/datastructures.html

# list, array, collection is same (we can tell in simple terms)

#index =    0   1   2   3   4   5   6   7   8   9
numbers = [45, 56, 12, 89, 87, 32, 84, 59, 45, 93]
#index =  -10  -9  -8  -7  -6  -5  -4  -3  -2  -1

print(numbers[3], numbers[-3])

# list(start : end)
# start from the start index and stops before the end index
print(numbers[2:6]) # [12, 89, 87, 32]

# list(start : end : step)
print(numbers[1:7:2]) # [56, 89, 32]

# reverse printing
print(numbers[7:2:-1]) # [59, 84, 32, 87, 89] # 7 index theke suru hoye 2 index giyeche

print(numbers[4:]) # index 4 to end
print(numbers[:8]) # index 0 to index 8
print(numbers[:]) # copy a list / print all elements, 0 to end
print(numbers[::-1]) # reverse a list / Reverse all the elements