# 2 agrs
def sum(num1, num2):
    result = num1 + num2
    return result

total = sum(99, 11)
print("Total:", total)

# 3 agrs
def sum(num1, num2, num3):
    result = num1 + num2 + num3
    return result

total = sum(99, 11, 5)
print("Total:", total)

# not valid
'''
def sum(num1, num2):
    result = num1 + num2 + num3
    return result

total = sum(99, 11, 5)
print("Total:", total)
'''

# num3 agr is optional now
def sum(num1, num2, num3 = 0):
    result = num1 + num2 + num3
    return result

total = sum(99, 11)
print("Total:", total)


# num3, num4, num5 agrs are optional now
def sum(num1, num2, num3 = 0, num4 = 0, num5 = 0):
    result = num1 + num2 + num3 + num4 + num5
    return result

total = sum(99, 11, 5)
print("Total:", total)


# agrs
def all_sum(*numbers):
    sum = 0
    for num in numbers:
        sum += num
    return sum

total_sum = all_sum(4, 5, 6) # all_sum() takes n_th amount of parameters
print("All Sum:", total_sum)
