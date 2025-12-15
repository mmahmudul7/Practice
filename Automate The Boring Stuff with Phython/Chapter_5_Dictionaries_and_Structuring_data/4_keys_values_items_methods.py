# Three dictionary methods.
spam = {'color': 'red', 'age': 42}

for value in spam.values():
    print(value)


for key in spam.keys():
    print(key)


for item in spam.items():
    print(item) # value returned in tuples form.


print(spam)
print(spam.keys())
print(spam.values())
print(spam.items())

print(list(spam.keys()))

for key, value in spam.items():
    print(f"Key: {key}, Value: {value}" )


# Checking Whether a Key or Value Exists in a Dictionary 
print('color' in spam.keys())
print('age' in spam.keys())
print('name' in spam.keys())
print('Zophie' in spam.keys())
print(42 in spam.values())
print(420 in spam.values())