# Strings are immutable data types

name = 'Zophie a cat'
# name[7] = 'the' # TypeError: 'str' object does not support item assignment
new_name = name[0:7] + 'the' + name[8:12]
print(new_name)
print(name) # not modified

# List is a mutable data types
# A list value is mutable
eggs = [1, 2, 3]
eggs = [4, 5, 6] # overwrting the old list value
print(eggs) # modified

eggs = [1, 2, 3]
del eggs[2]
del eggs[1]
del eggs[0]
eggs.append(4)
eggs.append(5)
eggs.append(6)
print(eggs) # modified

