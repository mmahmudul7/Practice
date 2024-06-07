sandwich_orders = ['veggie', 'grilled cheese', 'turkey', 'roast beef']
finished_sandwiches = []

while sandwich_orders:
    current_sandwich = sandwich_orders.pop()
    print("I made your", current_sandwich, "sandwich.")

    finished_sandwiches.append(current_sandwich)

print()
for sandwich in finished_sandwiches:
    print(sandwich.title(), "sandwich that was made.")