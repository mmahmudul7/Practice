number = input("What is the your number? ")
number = int(number)

if number % 10 == 0:
    print(f"\nYour number {number} is a multiple of 10.")
else:
    print(f"\nSorry! Your number {number} is not a multiple of 10.")