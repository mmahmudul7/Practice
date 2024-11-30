# key value pair 
# dictionary
# object
# overlap with set
# {key: value, key: value, key: value,}
person = {'name': 'Mahmudul Hasan', 'address': 'Rajshahi', 'age': 25, 'job': 'Data Scientist'}
print(person)
print(person['job'])
print(person.keys())
print(person.values())
# Muteable
person['language'] = 'python'
person['name'] = 'Hasan Shamim'
del person['age']
print(person)

# special dictionary looping
for key, value in person.items():
    print(key, value)