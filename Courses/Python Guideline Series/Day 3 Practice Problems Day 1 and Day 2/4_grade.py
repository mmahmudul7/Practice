'''
Write a Program to take integer input from user and display the grade according to the following criteria.

Marks				Grade
-----				-----
> 90				  A
>80 and <=90          B
>=60 and <=80	      C
below 60			  D

'''

marks = int(input("Enter your marks: "))

if marks > 90:
    print("Grade is: A")
elif marks > 80 and marks <= 90:
    print("Grade is: B")
elif marks >= 60 and marks <= 80:
    print("Grade is: C")
else:
    print("Grade is: D")