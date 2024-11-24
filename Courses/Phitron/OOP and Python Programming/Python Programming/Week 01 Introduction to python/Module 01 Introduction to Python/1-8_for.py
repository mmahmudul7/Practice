numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] # array
sum = 0

for num in numbers:
    sum += num
print(sum)


name = "Mahmudul Hasan"
for char in name:
    print(char)


for i in range(1, 10, 2):
    print(i)

# Find array index using for loop in python.
my_list = [21, 44, 35, 11]

for index in range(len(my_list)):
    value = my_list[index]
    print(index, value)