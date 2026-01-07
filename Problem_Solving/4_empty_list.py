def get_average(nums):
    if not nums:
        return None
    
    total = 0
    count = 0

    for n in nums:
        if isinstance(n, (int, float)) and not isinstance(n, bool):
            total += n
            count += 1

    if count == 0:
        return None

    return total / count


# numbers = []
numbers = [3, 4, 'Mahmud', 2.0, True, None] # mixed / heterogeneous list
# numbers = ['Mahmud', 'a']
avg = get_average(numbers)

print(avg)