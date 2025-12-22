numbers = [2, 9, 4, 2, 7, 6, 0, 3, 1, 5, 9]
unique_values = list(set(numbers))
unique_values.sort()

print(unique_values)
print(unique_values[-2])


##########
digits = [2, 9, 4, 2, 7, 6, 0, 3, 1, 5, 9]
unique_val = list(set(digits))

max_number = max(unique_val)
unique_val.remove(max_number)
runner_up = max(unique_val)
print(runner_up)


####
numbers = [2, 9, 4, 2, 7, 6, 0, 3, 1, 5, 9]
max_num = max(numbers)

while max_num in numbers:
    numbers.remove(max_number)

runner_up = max(numbers)
print(runner_up)


###########
numbers = [2, 9, 4, 2, 7, 9, 9 , 6, 0, 3, 1, 5, 9]

max_number = float('-inf')
runner_up = float('-inf')

for num in numbers:
    if num > max_number:
        runner_up = max_number
        max_number = num
    elif runner_up < num < max_number: # num < max_number and num > runner_up
        runner_up = num

print(runner_up)
