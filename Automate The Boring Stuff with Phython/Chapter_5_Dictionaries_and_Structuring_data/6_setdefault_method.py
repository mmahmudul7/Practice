# setdefault() inserts the key with a default value if it does not exist.

spam = {'name': 'Pooka', 'age': 5}

if 'color' not in spam:
    spam['color'] = 'black'

print(spam)

# The setdefault() method offers a way to do this in one line of code
print(spam.setdefault('color', 'black'))
print(spam)

# If the key does exist, the setdefault() method returns the key's value.
print(spam.setdefault('color', 'white'))
print(spam)