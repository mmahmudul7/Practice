# Find the second lowest value from a List or Array 

numbers = [2, 9, 4, 2, 7, 9, 9 , 6, 0, 3, 1, 5, 9]

min_number = float('inf')
second_lowest = float('inf')

for value in numbers:
    if value < min_number:
        second_lowest = min_number
        min_number = value
    elif value > min_number and value < second_lowest: # min_number < value < second_lowest
        second_lowest = value

print(second_lowest)