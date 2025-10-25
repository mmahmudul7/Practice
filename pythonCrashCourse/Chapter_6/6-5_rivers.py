rivers = {
    "nile" : "egypt",
    "padma" : "rajshahi",
    "jamuna" : "dhaka",
}

for river, city in rivers.items():
    print(f"The {river.title()} runs through {city.title()}.")
print()

for river in rivers.keys():
    print("-", river.title())
print()

for city in rivers.values():
    print("-", city.title())