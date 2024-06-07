cars = ["bmw", "audi", "toyota", "subaru"]
cars.sort()
print(cars)

suvs = ["bmw", "audi", "toyota", "subaru"]
suvs.sort(reverse=True)
print(suvs)

print("\nSorting a List Temporarily with the sorted() Function")
cars = ["bmw", "audi", "toyota", "subaru"]
#cars = ["Bmw", "Audi", "Toyota", "Subaru"]

print("\nHere is the origina list:")
print(cars)

print("\nHere is the sorted list:")
print(sorted(cars))

print("\nHere is the origina list again:")
print(cars)

cars.reverse()
print(cars)

length = len(cars)
print(length)