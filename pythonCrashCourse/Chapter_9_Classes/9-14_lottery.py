"""9-14. 
Lottery: Make a list or tuple containing a series of 10 numbers and 5 letters.
Randomly select 4 numbers or letters from the list and print a message saying that any
ticket matching these 4 numbers or letters wins a prize
"""

from random import choice

possibilities = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'a', 'e', 'i', 'o', 'u']

winning_ticket = []
print("Let's see what the winning ticket is...")

# We don't want to repeat winning numbers or letters, so we'll use a while loop.
while len(winning_ticket) < 4:
    pulled_item = choice(possibilities)

    # Only add the pulled item to the winning ticket
    # if it hasn't already been pulled.
    if pulled_item not in winning_ticket:
        print(f"\tWe pulled a {pulled_item}!")
        winning_ticket.append(pulled_item)

print(f"\nThe final winning ticket is: {winning_ticket}")
