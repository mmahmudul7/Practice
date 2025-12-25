def make_chocolate(small, big, goal):
    big_used = min(big, goal // 5)
    remaining = goal - (big_used * 5)

    if remaining <= small:
        return remaining
    else:
        return -1
    
'''
Return used small bars
Return -1 if it can't be done.
make_chocolate(4, 1, 9)

big_use = min(1, 9 // 5) = min(1, 1) = 1
reamining = 9 - 5 = 4
4 <= 4: return 4 else -1

make_chocolate(4, 1, 10)
big_use = min(1, 10 // 5) = min(1, 2) = 1
remaining = 10 - 5 = 5
5 <= 4: return -1

make_chocolate(4, 1, 7)
big_use = min(1, 7 // 5) = 1
remaining = 7 - 5 = 2
2 <= 4: return 2

'''