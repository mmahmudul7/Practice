spam = 42 # variables storing references to the computer memory locations where the value stored.
cheese = spam # cheese varible copy the reference of spam, both are refer the same computer's memory
print(spam)
print(cheese)
print(id(spam))
print(id(cheese))

spam =  100 # for new value 100, we have now new reference
print(spam)
print(cheese)
print(id(spam))
print(id(cheese))