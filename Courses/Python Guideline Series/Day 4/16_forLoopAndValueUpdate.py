sentance = "Hello World" # string
for letter in sentance:
    print(letter)
print()

bag = ["alu", "piyaj", 30, 25, 11, 0, 5, 3]
for item in bag:
    print(item)
print()

lst = [12, 5, 7, -2,  5, 6]
for i in lst:
    if i <= 10:
        print(i)
print()

# 3 and 5 dara divible number
for i in range(20):
    if i%3 == 0 and i%5 == 0:
        print(i)
print()

# sum of 1 to 10 / update value of veriable
sum = 0
for i in range(1, 11):
    sum += i
print(sum)
print()