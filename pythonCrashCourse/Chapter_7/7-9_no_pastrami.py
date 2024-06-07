sandwich_orders = ["pastrami", "veggie", "pastrami", "grilled cheese", 
                   "pastrami", "turkey", "roast beef"]

finished_sandwiches = []

print("The deli has run out of pastrami.")

while "pastrami" in sandwich_orders:
    sandwich_orders.remove("pastrami")

while sandwich_orders:
    current_sandwich = sandwich_orders.pop()
    finished_sandwiches.append(current_sandwich)

print(sandwich_orders)
print(finished_sandwiches)

for sandwich in finished_sandwiches:
    print(sandwich)