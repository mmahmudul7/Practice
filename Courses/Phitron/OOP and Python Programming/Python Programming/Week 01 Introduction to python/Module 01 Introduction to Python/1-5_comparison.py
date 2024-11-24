# >, <, >=, <=, ==, !=
# no: ++, --
# +=, -+, *=, /=

a = 7
a= a + 5
a += 5

num1 = 12
num2 = 5

power = num1 ** num2
print(power)

x = 5
y = 5
print(x == y)  # Output: True

x = 5
y = 10
print(x == y)  # Output: False

x = 5
y = 5
print(x != y)  # Output: False

x = 5
y = 10
print(x != y)  # Output: True

x = 10
y = 5
print(x > y)  # Output: True

x = 5
y = 10
print(x > y)  # Output: False

x = 10
y = 5
print(x < y)  # Output: False

x = 5
y = 10
print(x < y)  # Output: True

x = 10
y = 5
print(x >= y)  # Output: True

x = 5
y = 5
print(x >= y)  # Output: True

x = 10
y = 5
print(x <= y)  # Output: False

x = 5
y = 5
print(x <= y)  # Output: True