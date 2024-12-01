# def doubled(x):
#     return x * 2

# using single parameter
doubled = lambda num : 2 * num
squared = lambda num : num * num
result = doubled(44)
output = squared(9)
print(result, output)

# using double parameter
add = lambda x, y : x + y
sum = add(11, 22)
print(sum)

# map
numbers = [12, 56, 98, 78, 56, 12, 6, 98]
# doubled_nums = map(doubled, numbers)
doubled_nums = map(lambda x : 2 * x, numbers)
squared_nums = map(lambda x : x * x, numbers)
print(numbers)
print(list(doubled_nums))
print(list(squared_nums))

names = [
    {'name': 'Mahmud', 'age': 65},
    {'name': 'Hasan', 'age': 45},
    {'name': 'Shamim', 'age': 30},
    {'name': 'Kader', 'age': 38},
    {'name': 'Khan', 'age': 47},
]

juniors = filter(lambda name : name['age'] < 40, names)
fivers = filter(lambda name : name['age'] % 5 == 0, names)
print(list(juniors))
print(list(fivers))