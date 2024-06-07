motorcycles = ["honda", "yahama", "suzuki"]
print(motorcycles)

popped_motorcycle = motorcycles.pop()
print(motorcycles)
print(popped_motorcycle)

# another script
motorcyclesI_Owned = ["honda", "yahama", "suzuki"]

last_owned = motorcyclesI_Owned.pop()
print(f"\nThe last motorcycle I owned was a {last_owned.title()}")

# another script
motorcyclesI_Owned = ["honda", "yahama", "suzuki"]

first_owned = motorcyclesI_Owned.pop(0)
print(f"\nThe last motorcycle I owned was a {first_owned.title()}\n")

print(motorcyclesI_Owned)