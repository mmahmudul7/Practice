glossary = {
    'string': 'A series of characters.',
    'comment': 'A note in a program that the Python interpreter ignores.',
    'list': 'A collection of items in a particular order.',
    'loop': 'Work through a collection of items, one at a time.',
    'dictionary': "A collection of key-value pairs.",
}

for word, value in glossary.items(): # key, value
    print(f"{word.title()}: {value}")
#########
print()
word = 'string'
print(word.title() + ": " + glossary[word])

word = 'comment'
print(word.title() + ": " + glossary[word])

word = 'list'
print(word.title() + ": " + glossary[word])

word = 'loop'
print(word.title() + ": " + glossary[word])

word = 'dictionary'
print(word.title() + ": " + glossary[word])
###########