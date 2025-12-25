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
make_chocolate(60, 100, 550)
big_used = min(100, 110) = 100
remaining = 550 - (100 * 5) = 50
50 <= 100: return 50

make_chocolate(4, 1, 9)

big_used = min(1, 9 // 5) = min(1, 1) = 1
reamining = 9 - 5 = 4
4 <= 4: return 4 else -1

make_chocolate(4, 1, 10)
big_used = min(1, 10 // 5) = min(1, 2) = 1
remaining = 10 - 5 = 5
5 <= 4: return -1

make_chocolate(4, 1, 7)
big_used = min(1, 7 // 5) = 1
remaining = 7 - 5 = 2
2 <= 4: return 2

'''