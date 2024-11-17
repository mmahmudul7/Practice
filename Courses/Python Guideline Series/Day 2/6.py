'''
print(10 - 4 == 6 and 10 - 5 == 15) # False
print(10 - 4 == 6 and 10 - 5 == 5)  # True

print(10 - 4 == 6 or 10 - 5 == 15)  # True
print(10 - 4 == 6 or 10 - 5 == 15)  # True

print(not (10 - 4 == 6))  # False
'''

marks = 85

if marks >= 90 and marks <= 100:
    print("tumi duita candy box paba")
elif marks >= 80 and marks <= 89:
    print("tumi akta candy box paba")
else:
    print("tumi kichui paba na")