# more about range function
a = range(10)
print(a)

a = list(range(10))
for i in range(10):
    print(i)

# range(start, end, step)

b = list(range(10))
c = list(range(3, 10)) # 3 - 9 pawa jabe
d = list(range(2, 5)) # 2 - 4 pawa jabe
e = list(range(0, 10, 2)) # 0 2 4 6 8
f = list(range(0, 10, 3)) # 0 3 6 9

print(b)
print(c)
print(d)
print(e)
print(f)

# reverse print using range function
y = list(range(10, -5, -2)) # range(10 theke start, -4 porjonto jabe, 2 gor kore reverse hobe tay minus)
print(y)