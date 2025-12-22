a = 2
b = 3
print(f'a = {a}, b = {b}')

c = a
a = b
b = c
print(f'a = {a}, b = {b}')

print()
###======
x = 5
y = 9

print(f'x = {x}, y = {y}')

x, y = y, x # using tuple unpacking 
# (x, y) = (y, x)
# x = 5
# y = 9
# (y, x)  →  (9, 5)
# x = 9
# y = 5
# Tuple unpacking-এ ডান পাশ value তৈরি করে, বাম পাশ assignment control করে। 
print(f'x = {x}, y = {y}')