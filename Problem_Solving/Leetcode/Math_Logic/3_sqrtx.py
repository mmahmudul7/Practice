def mySqrt(x: int) -> int:
    if x < 2:
        return x

    left = 1
    right = x // 2
    ans = 0

    while left <= right:
        mid = (left + right) // 2
        square = mid * mid

        if square == x:
            return mid
        elif square > x:
            right = mid - 1
        else: # square < x:
            ans = mid # possible answer
            left = mid + 1
    
    return ans


# x = 64
# x = 20
x = 8
ans = mySqrt(x)
print(ans)