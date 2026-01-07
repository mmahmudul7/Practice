def isPalindrome(x):
    if x == 0:
        return True

    if x < 0 or  x % 10 == 0:
    # x < 0 negetive nummbers / 10 er gunito amon numbers 10, 100, 1000, 40 ai gulow palindom hobe na
        return False
    
    reversed_half = 0
    while reversed_half < x:
        remainder = x % 10
        reversed_half = reversed_half * 10 + remainder
        x = x // 10

    return x == reversed_half or x == reversed_half // 10


# print(isPalindrome(1221))
print(isPalindrome(121))