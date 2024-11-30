# list --> []
# tuple --> ()
# set --> {}
# Set: Unique items collection. No dublicate
numbers = [12, 56, 98, 78, 56, 12, 6, 98]
print(numbers)

numbers_set = set(numbers)
print(numbers_set)

numbers_set.add(55)
print(numbers_set)

for item in numbers_set:
    print(item)

if 9 in numbers_set:
    print('9 exists')
elif 98 in numbers_set:
    print('98 exists')

A = {1, 3, 5, 7}
B = {1, 2, 3, 4, 5}
print(A|B) # A UNION B
print(A&B) # A INTERSECT B
print(A-B) # A DIFFERENCE B
print(A^B) # A SYMETRIC DIFFERENCE B ETC

# https://www.freecodecamp.org/news/python-set-how-to-create-sets-in-python/