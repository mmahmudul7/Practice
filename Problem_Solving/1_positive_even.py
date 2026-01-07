def get_positive_even(nums):
    if not nums:
        return[]
    
    result = []
    for n in nums:
        if n % 2 == 0:
            result.append(n)
    
    return result

# nums = []
nums = [0, 1, 2, 3, 4, 5, 6]
print(get_positive_even(nums))