spam = [2, 5, 3.14, 1, -7]
spam.sort()
print(spam)

spam = ['ants', 'cats', 'dogs', 'badgers', 'elephants']
spam.sort()
print(spam)

reverse = spam
reverse.sort(reverse=True)
print(reverse)

# spam = [1, 3, 2, 4, 'Alice', 'Bob']
# spam.sort() 
# TypeError: '<' not supported between instances of 'str' and 'int'

spam = ['Alice', 'ants', 'Bob', 'badgers', 'Carol', 'cats']
spam.sort()
print(spam) # ASCIIbetical order

spam = ['a', 'z', 'A', 'Z']
spam.sort(key=str.lower) # Regular alphabetical order
print(spam)