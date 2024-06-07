prompt = "\nHow old are you? "
prompt += "\nEnter 'quit' when you are finished: "

while True:
    age = input(prompt)

    if age == 'quit':
        break

    age = int(age)

    if age < 3:
        print("The baby's tickets is free!")
    elif age <= 12:
        print("The ticket price is $10")
    elif age > 12:
        print("The ticket price is $15")