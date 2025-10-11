numbers = [12, 45, 98, 68]
print(numbers) # [12, 45, 98, 68]

numbers.append(56)
print(numbers) # [12, 45, 98, 68, 56] 

numbers.insert(2, 81) # insert in 2nd index
print(numbers) # [12, 45, 81, 98, 68, 56]

if 98 in numbers:
    numbers.remove(98)
print(numbers) # [12, 45, 81, 68, 56]

if 8 in numbers:
    numbers.remove(8)
print(numbers) # [12, 45, 81, 68, 56]

lastElement = numbers.pop()
print(lastElement, numbers) # 56 [12, 45, 81, 68]

if 45 in numbers:
    index = numbers.index(45)
    print(index) # 1

numbers.sort() 
print(numbers) # [12, 45, 68, 81]

numbers.reverse()
print(numbers) # [81, 68, 45, 12]

# etc