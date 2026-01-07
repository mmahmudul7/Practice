def isvowel(ch):
    return ch in 'aeiou'

tc = int(input())
cs = 0

for _ in range(tc):
    n = int(input())
    s = input().strip()

    cnt = 0
    for i in range(1, n):
        if not isvowel(s[i]) and isvowel(s[i - 1]):
            cnt += 1

    if isvowel(s[n - 1]):
        cnt += 1

    if cnt < 0:
        cnt = 0

    cs += 1
    print(f"Case {cs}: {cnt}")
