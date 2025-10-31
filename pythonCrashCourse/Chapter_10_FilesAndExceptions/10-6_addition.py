"""10-6. 
Addition: One common problem when prompting for numerical input occurs
when people provide text instead of numbers. When you try to convert the input to an
int, you’ll get a ValueError. Write a program that prompts for two numbers. Add them
together and print the result. Catch the ValueError if either input value is not a number,
and print a friendly error message. Test your program by entering two numbers and
then by entering some text instead of a number
"""

try:
    number_one = int(input("Please inter 1st number: "))
    number_two = int(input("Please inter 2nd number: "))
except ValueError:
    print("Sorry, I really need a number.")
else:
    sum = number_one + number_two
    print(f"The sum of {number_one} and {number_two} is {sum}.")