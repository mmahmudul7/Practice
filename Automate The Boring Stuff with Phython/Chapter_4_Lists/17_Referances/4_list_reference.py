# List are mutable objects. so refere same address after modificatins.

eggs = ['cat', 'dog']
print(id(eggs))
eggs.append('moose')
print(id(eggs))

print('\nThis creates a new list, which has a new identity.')
eggs = ['bat', 'rat', 'cow']
print(id(eggs))

# Python's automatic garbage collector deletes any values not being referred to by any varibales to free up memory.