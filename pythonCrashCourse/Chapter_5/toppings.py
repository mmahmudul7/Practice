requested_topping = "mushrooms"

if requested_topping != "anchovies":
    print("Hold the anchovies!")

################################
requested_topping = ["mushroom", "extra cheese"]

if "mushroom" in requested_topping:
    print("\nAdding mushrooms.")
if "pepperoni" in requested_topping:
    print("Adding pepperoni.")
if "extra cheese" in requested_topping:
    print("Adding extra cheese.")

print("\nFinished making your pizza!\n")

################################
requested_toppings = ["mushroom", "green peppers", "extra cheese"]

for requested_topping in requested_toppings:
    print(f"Adding {requested_topping}.")
print("\nFinished making your pizza!\n")

################################
requested_toppings = ["mushroom", "green peppers", "extra cheese"]

for requested_topping in requested_toppings:
    if requested_topping == "green peppers":
        print("Sorry, we are out of green pappers right now.")
    else:
        print(f"Adding {requested_topping}.")
print("\nFinished making your pizza!\n")

################################
print("\tEmpty list:")
requested_toppings = []

if requested_toppings:
    for requested_topping in requested_toppings:
        print(f"Adding {requested_topping}.")
    print("Finished making your pizza!")
else:
    print("Are you sure you want a plain pizza?")

################################
print("\n\tUsing Multiple Lists:")
available_toppings = ("mushrooms", "olives", "green peppers",
                      "pepperoni", "pineapple", "extra cheese")

requested_toppings = ["mushrooms", "french fries", "extra cheese"]

for requested_topping in requested_toppings:
    if requested_topping in available_toppings:
        print(f"Adding {requested_topping}")
    else:
        print(f"Sorry, we don't have {requested_topping}.")

print("\nFinished making your pizza!")