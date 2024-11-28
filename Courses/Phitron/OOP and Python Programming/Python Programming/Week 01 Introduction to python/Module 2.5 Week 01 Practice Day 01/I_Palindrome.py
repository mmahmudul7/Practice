# https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

N = input()

reversed_N = ""
leading_zero = True

for i in range(len(N) - 1, -1, -1):
    if leading_zero and N[i] == '0':
        continue
    else:
        leading_zero = False
        reversed_N += N[i]

if reversed_N == "":
    reversed_N = "0"

is_palindrome = True
for i in range(len(N) // 2):
    if N[i] != N[len(N) - i - 1]:
        is_palindrome = False
        break

print(reversed_N)
print("YES" if is_palindrome else "NO")