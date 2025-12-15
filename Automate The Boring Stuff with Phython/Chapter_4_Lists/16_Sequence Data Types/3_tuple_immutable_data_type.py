# Tuple data type almost identical to the list data type 
eggs = ('hello', 42, 0.5)
print(eggs[0])
print(eggs[1:3])
print(len(eggs))

###=== But tuples are immutable 
# eggs[1] = 99 # TypeError: 'tuple' object does not support item assignment

print(type(('hello',))) # <class 'tuple'>
print(type(('hello'))) # <class 'str'>

# Tuples slightly faster than List
# Tuples, their contents don't change