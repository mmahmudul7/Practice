# class Solution:
#     def plusOne(self, digits):
#         number = 0
#         for d in digits:
#             number = number * 10 + d

#         plus_one = number + 1

#         result = []
#         while plus_one > 0:
#             digit = plus_one % 10
#             result.append(digit)
#             plus_one //= 10

#         return result[::-1]

def plusOne(digits):
    n = len(digits)

    # start from right side / # tranverse from right side
    for i in range(n - 1, -1, -1):
        if digits[i] < 9:
            digits[i] += 1
            return digits
        else:
            digits[i] = 0

    # if last digit is 9
    return [1] + digits

digits = [9, 9]
digits = [8, 9]
# digits = [1, 2, 3]
print(plusOne(digits))