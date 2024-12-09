A = int(input())
B = int(input())

lucky_numbers = []

for i in range(A, B + 1):
    n = i
    is_lucky = True

    while n > 0:
        digit = n % 10
        if digit != 4 and digit != 7:
            is_lucky = False
            break
        n //= 10

    if is_lucky:
        lucky_numbers.append(i)

if not lucky_numbers:
    print(-1)
else:
    for i in range(len(lucky_numbers)):
        if i > 0:
            print(" ", end="")
        print(lucky_numbers[i], end="")
    print()