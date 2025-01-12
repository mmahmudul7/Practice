# list built in methods 
list1 = [1, 2, 3]
list2 = [4, 5, 6]

list_3 = list1 + list2
print(list_3)

list_4 = list2 + list1
print(list_4)

# list() convert string to list 
msg = "Hello World!"
print(list(msg))

# append() Adds an element at the end of the list 
a = [12, 2, 13, 45]
a.append(40)
print(a)
a.append("phitron")
print(a)

# insert() Adds an element at the specific position 
b = [1, 2, 3, 4, 5]
b.insert(2, 100)
# b.insert(10, 100)
print(b)

# copy() Returns a copy of the list 
c = [1, 2, 3, 4, 5]
d = c
# d = c.copy()
print(d)

# count() Returns the number of elements with the specified value 
e = [1, 2, 2, 3, 6, 5, 5, 5, 2, 6, 'a', 'a', 'b']
print(a.count(2))
print(a.count('a'))
print(a.count('f'))

# extend() Add the elements of a list to the end of the current list 

f = [12, 2, 5, 6]
# f.extend([32, 90])
f = f + [32, 90]
print(f)