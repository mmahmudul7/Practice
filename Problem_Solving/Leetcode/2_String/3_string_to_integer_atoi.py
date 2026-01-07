def myAtoi(s: str) -> int:
    INT_MIN = -2**31
    INT_MAX = 2**31 - 1

    i = 0
    n = len(s)

    #1 skip leading whitespace
    while i < n and s[i] == ' ':
        i += 1

    # empty or only spaces
    if i == n:
        return 0

    #2 check sign
    sign = 1
    if s[i] == '-':
        sign = -1
        i += 1
    elif s[i] == '+':
        i += 1

    #3 convert digits
    num = 0
    while i < n and s[i].isdigit():
        digit = ord(s[i]) - ord('0')
        num = num * 10 + digit
        i += 1

    #5 apply sign
    num = sign * num

    # overflow check
    if num < INT_MIN:
        return INT_MIN
    if num > INT_MAX:
        return INT_MAX

    return num


# s = "words and 987"
# s = " -042"
# s = "          "
# s = "1337c0d3"
# s = "++42"
# s = "--42"
# s = "+42"
# s = "-42"
s = "+000123"
# s = "2147483648"
# s = "-2147483649"
print(myAtoi(s))

'''
tests = [
    "", " ", "+", "-",
    "42", "   -42",
    "4193 with words",
    "words 987",
    "+000123",
    "2147483648",
    "-2147483649"
]
'''
'''
        #4 overflow check
        # if num > (INT_MAX - digit) // 10: # num * 10 + digit > INT_MAX
        #     return INT_MAX if sign == 1 else INT_MIN

        ##
        # remaining = INT_MAX - digit
        # limit = remaining // 10

        # if num > limit:
        #     if sign == 1:
        #         return INT_MAX
        #     else:
        #         return INT_MIN
'''