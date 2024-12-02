n = input()
ar = [int(i) for i in input().split(" ")]

flag = True
count = 0

while flag is True:
    for i, number in enumerate(ar):
        if number % 2 == 1:
            flag = False
            break
        else:
            ar[i] /= 2
    if flag: count += 1
print(count)