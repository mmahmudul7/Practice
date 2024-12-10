numbers = [45, 87, 96, 65, 43, 90, 85, 14, 26, 61, 70]

odds = []
for num in numbers:
    if num % 2 == 1 and num % 5 == 0:
        odds.append(num)
print(odds)

# Comprehension way
odd_nums = [num for num in numbers]
print(odd_nums)

odd_nums = [num for num in numbers if num % 2 == 1]
print(odd_nums)

odd_nums = [num for num in numbers if num % 2 == 1 if num % 5 == 0]
print(odd_nums)
print()
# Nested loop example
names = ["Mahmud", "Hasan", "Shamim"]
ages = [35, 23, 18]

age_comb = []
for name in names:
    # print("name", name)
    for age in ages:
        # print(name, age)
        age_comb.append([name, age])
print(age_comb)
print()
# Comprehension way
age_comb2 = [[name, age] for name in names for age in ages]
print(age_comb2)
