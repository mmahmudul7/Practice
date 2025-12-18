# print(['cat', 'rats', 'bats'])
print(', '.join(['cat', 'rats', 'bats']))
print(' '.join(['My', 'name', 'is', 'Mahmud']))
print('ABC'.join(['My', 'name', 'is', 'Mahmud']))
print('ABC'.join(['123', '456', '789']))

#print('ABC'.join([123, 456, 789]))
# TypeError: sequence item 0: expected str instance, int found

# split() 
print('My name is Mahmud'.split())
print('MyABCnameABCisABCMahmud'.split('ABC'))
print('My name is Mahmud'.split('m'))

# Apply split() on multiple lines
spam = '''\nDear Alice,
How have your been? I am fine.
There is a container in the fridge
that is labeled "Milk Experiment."

Please do not drink it.
Sincerely,
Bob'''
print(spam)
print(spam.split('\n'))