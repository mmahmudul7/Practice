# isalpha(), only letter (a–z, A–Z, unicode letter)
print('hello'.isalpha()) # True
print('hello123'.isalpha()) # False

# isalnum(), only letter + digit
print()
print('hello'.isalnum()) # True
print('hello123'.isalnum()) # True
print('hello 123'.isalnum()) # False

# isdecimal(), decimal digit (0–9)
print()
print('123'.isdecimal()) # True
print('Ⅻ'.isdecimal()) # False

# isspace() 
print()
print('  '.isspace()) # True
print('\n\t'.isspace()) # True

# istitle()
print()
print('This Is Title Case'.istitle()) # True
print('This Is Title Case 123'.istitle()) # True
print('This Is not Title Case'.istitle()) # False
print('This Is NOT Title Case'.istitle()) # False

print()
print('1011'.isdigit()) # True # 0 to 9 digit gula ache ki check kore 
print('10.11'.isdigit()) # False # only positive integer check kore

print() # ASCII range (0–127)
print('10.11'.isascii()) # True
print('বাংলা'.isascii()) # False

print()
print('10.11'.isidentifier()) # False
print('var_name'.isidentifier()) # True
print('1_name'.isidentifier()) # False

print()
print('10.11'.isnumeric()) # False
print('1011'.isnumeric()) # True
print('Ⅻ'.isnumeric()) # True # It's not XII

print()
print('1011'.isprintable()) # True
print('10.~11'.isprintable()) # True
print('Hello\tWorld!'.isprintable()) # False
