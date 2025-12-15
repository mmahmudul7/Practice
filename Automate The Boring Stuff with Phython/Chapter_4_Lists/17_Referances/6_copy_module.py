import copy

spam = ['A', 'B', 'C', 'D']
print(id(spam))
cheese = copy.copy(spam)
print(id(cheese)) # cheese is a different list with different identity.

cheese[1] = 42
print(spam)
print(cheese)

# ===
spam = [['A', 'B'], ['C', 'D']]

cheese = copy.copy(spam)
milk = copy.deepcopy(spam)

cheese[0].append('X')

print(spam) # [['A', 'B', 'X'], ['C', 'D']]
print(cheese) # [['A', 'B', 'X'], ['C', 'D']]
print(milk) # [['A', 'B'], ['C', 'D']]
