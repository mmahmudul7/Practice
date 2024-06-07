print("shamim" == "shamim")
print("shamim" != "shamim")
print()

print("Shamim".lower() == "shamim")
print("Shamim".lower() != "shamim")
print()

digit_1 = 15
digit_2 = 25

equality = digit_1 == digit_2
print(equality)

inequality = digit_1 != digit_2
print(inequality)

greaterThan = digit_1 > digit_2
print(greaterThan)

lessThan = digit_1 < digit_2
print(lessThan)

greaterThanEqual = digit_1 >= digit_2
print(greaterThanEqual)

lessThanEqual = digit_1 <= digit_2
print(lessThanEqual)
print()
print((digit_1 < digit_2) and (digit_1 > digit_2))
print((digit_1 < digit_2) or (digit_1 > digit_2))
print()

digits = [1, 3, 5, 7, 9]
print(1 in digits)
print(2 in digits)

print(3 not in digits)
print(4 not in digits)