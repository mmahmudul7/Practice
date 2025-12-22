def average(items):
    total = 0
    count = 0

    for x in items:
        # True  == 1
        if isinstance(x, (int, float)) and not isinstance(x, bool):
            total += x
            count += 1

    if count == 0:
        return None

    return total / count


# numbers = []
numbers = [3, 4, 'Mahmud', 2.0, True, None] # mixed / heterogeneous list
# numbers = ['Mahmud', 'a']
avg = average(numbers)

print(avg)