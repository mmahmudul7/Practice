# Take values of length and breadth of a rectangle from user and check if it is square or not

length = int(input("Enter the length of rectangle: "))
breadth = int(input("Enter the breadth of rectangle: "))

if length == breadth:
    print("Square")
else:
    print("Not Square")