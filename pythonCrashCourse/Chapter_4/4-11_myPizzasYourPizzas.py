pizzas = ["vegetables pizza", "beef pizza", "chicken pizza"]
friend_pizzas = pizzas[:]

pizzas.append("maton pizza")
friend_pizzas.append("chili pizza")

print("My favorite piazzas are: ")
for myPizza in pizzas:
    print("- " + myPizza.title())

print("\nMy friend's favorite piazzas are: ")
for friendPizza in friend_pizzas:
    print("- " + friendPizza.title())