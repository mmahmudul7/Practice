"""10-7. 
Addition Calculator: Wrap your code from Exercise 10-6 in a while loop so the
user can continue entering numbers, even if they make a mistake and enter text
instead of a number.
"""
print("Enter 'q' at any time to quit.\n")

while True:
    try:
        number_one = input("Please inter 1st number: ")
        if number_one == 'q':
            break
        number_one = int(number_one)

        number_two = int(input("Please inter 2nd number: "))
        if number_two == 'q':
            break
        number_two = int(number_two)

    except ValueError:
        print("Sorry, I really need a number.")
    else:
        sum = number_one + number_two
        print(f"The sum of {number_one} and {number_two} is {sum}.")