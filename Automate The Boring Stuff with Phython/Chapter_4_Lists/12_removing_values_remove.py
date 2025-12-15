spam = ['cat', 'bat', 'rat', 'elephant']
spam.remove('bat')
print(spam)

# spam.remove('chicken') ValueError 

spam = ['cat', 'bat', 'rat', 'cat', 'hat', 'cat']
spam.remove('cat')
print(spam)
# ['bat', 'rat', 'cat', 'hat', 'cat']