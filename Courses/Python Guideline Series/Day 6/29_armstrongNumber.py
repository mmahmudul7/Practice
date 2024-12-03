'''
num = int(input())
num_len = len(str(num))
tmp = num
sum = 0

while tmp > 0:
    last_digit = tmp % 10
    sum = sum + last_digit ** num_len
    # tmp = tmp // 10
    tmp //= 10

if sum == num:
    print("Armstrong number")
else:
    print("Not an Armstrong number")
'''

# Method 2
number = input()
num_len = len(number)

sum = 0
for i in number:
    sum = sum + int(i) ** num_len
    # sum += int(i) ** num_len
if int(number) == sum:
    print("Armstrong number")
else:
    print("Not an Armstrong number")