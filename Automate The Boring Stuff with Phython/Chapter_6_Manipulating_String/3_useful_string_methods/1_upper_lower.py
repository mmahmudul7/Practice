spam = 'Hello World!'
print(spam)

spam = spam.upper() # Return new string and replaced old string
print(spam)

spam = spam.lower() # Return new string and replaced old string
print(spam)


# Non letters charater in the string remain unchanged 
print()
non_letters = '123$%^Li/123'

print(non_letters.upper())
print(non_letters.lower())

### ====
print()
name = 'Mahmud Hasan'
print(id(name.upper())) # create new staring, but not replacing old name.
print(id(name.lower())) # create new staring, but not replacing old name/String.

## == 
print()
print('How are you?')
feeling = input('> ')

if feeling.lower() == 'great':
    print('I feel great too.')
else:
    print('I hope the rest of your day is good.')
