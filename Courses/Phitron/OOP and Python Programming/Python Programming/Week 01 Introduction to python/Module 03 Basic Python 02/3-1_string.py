name1 = 'Mahmud\'s Design' # Escape
name2 = "Mahmudul Hasan"

# Multiline string
name3 = '''
    Mahmudul Hasan
    Hasan Shamim
'''

name4 = """
    Mahmudul Hasan
    Hasan Shamim
"""

print(name3)

# Sting is a sequence of characters
for char in name1:
    print(char)

print(name2[3])
print(name2[-3])
print(name2[1:6])
print(name2[::-1])
# Mutable means changeable
# Immutable means you can not change it
# name1[2] = 'R'
# print(name1)

if 'Hasan' in name2:
    print("exists")

print(name2.upper())

# https://www.programiz.com/python-programming/methods/string