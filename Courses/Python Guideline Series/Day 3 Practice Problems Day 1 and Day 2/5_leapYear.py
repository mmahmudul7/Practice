'''
Write a Program to check whether a year is leap year or not. Take input from User. if year = 1996, it is a leap year
Conditions for leper:

    1. If a year is divisible by both 400 and 100 it is a leap year
    2. If a year is divisible by 4 and not divisible by 100 it is a leap year

'''

year = int(input())

if (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0):
    print("year =", year, "it is a leap year.")
else:
    print("year =", year, "it is not a leap year.")