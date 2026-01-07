def mySqrt(x: int) -> int:
    if x < 2:
        return x

    l = 1
    r = x // 2 # 12
    ans = 0

    while l <= r: # 5 <= 5
        mid = (l + r) // 2 # 5
        square = mid * mid # 25

        if square == x: # 25 == 25
            return mid
        
        elif square > x:
            r = mid - 1 # 5

        else: # square < x: # 16 < 25
            ans = mid # 4
            l = mid + 1 # 5
    
    return ans

# x = 16 # return mid
x = 25
# x = 9
# x = 20
# x = 8
ans = mySqrt(x)
print(ans)