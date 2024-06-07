prompt = "\nEnter a pizza toppings: "
prompt += "\nEnter 'quit' when you are finished: "

while True:
    topping = input(prompt)

    if topping == 'quit':
        break
    print(f"\nYou'll add {topping.title()} topping to your pizza.")