number = int(input())

count = 0
while number > 0:
    number = number // 10
    count += 1
print(count)


number2 = input()
print(len(number2))