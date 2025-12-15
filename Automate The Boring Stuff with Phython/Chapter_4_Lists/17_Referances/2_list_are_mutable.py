spam = [0, 1, 2, 3, 4, 5]
cheese = spam # The reference is being copied, not the list.
print(spam)
print(cheese)

cheese[1] = 'Hello' # This chages the list value.
print(spam)
print(cheese) # The cheese variable refers to the same list.