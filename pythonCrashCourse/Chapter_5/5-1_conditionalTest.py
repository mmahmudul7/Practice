car = "subaru"
# True
print("Is car == 'subaru'? I predict True.")
print(car == "subaru")
print(car != "audi")
print("subaru" in car)
print("audi" not in car)
print(car == "subaru" or car == "audi")
print(car.title() == "Subaru")

# False
print("\nIs car == 'audi'? I predict False.")
print(car == "audi")
print(car != "subaru")
print("audi" in car)
print("subaru" not in car)
print(car == "audi" and car == "subaru")
print(car.title() == "subaru")
