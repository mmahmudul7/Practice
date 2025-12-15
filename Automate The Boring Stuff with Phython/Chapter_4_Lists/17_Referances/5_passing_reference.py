# Pass by reference 

def eggs(some_parameter):
    some_parameter.append('Hello')
    # we no return statement


spam = [1, 2, 3]
eggs(spam)
print(spam)

# Even though spam and some_parameter contain separate references, they bother refer to the same list.

