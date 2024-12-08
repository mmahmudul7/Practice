number = int(input())

rev_num = 0
while number > 0:
    last_digit = number % 10
    rev_num = rev_num * 10 + last_digit
    number //= 10
print(rev_num)