'''
Write a program using conditional Statement whether a number is even or odd.
(even means divisible by 2 and odd mean not divisible by 2)
Suppose user provide input as 15 then it will print "15 is an odd number"
'''

num = int(input())

if num % 2 == 0:
    print(num, "is an even number")
else:
    print(num, "is an odd number")