numbers = [12, 45, 98, 68]
print(numbers)

numbers.append(56)
print(numbers)

numbers.insert(2, 81) # insert in 2nd index
print(numbers)

if 98 in numbers:
    numbers.remove(98)
print(numbers)

if 8 in numbers:
    numbers.remove(8)
print(numbers)

lastElement = numbers.pop()
print(lastElement, numbers)

if 45 in numbers:
    index = numbers.index(45)
    print(index)

numbers.sort() 
print(numbers)

numbers.reverse()
print(numbers)

# etc