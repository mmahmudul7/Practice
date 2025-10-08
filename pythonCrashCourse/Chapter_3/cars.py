cars = ['bmw', 'audi', 'toyota', 'subaru']
cars.sort()
print(cars) # ['audi', 'bmw', 'subaru', 'toyota']

suvs = ["bmw", "audi", "toyota", "subaru"]
suvs.sort(reverse=True)
print(suvs) # ['toyota', 'subaru', 'bmw', 'audi']

print("\nSorting a List Temporarily with the sorted() Function")
cars = ["bmw", "audi", "toyota", "subaru"]
#cars = ["Bmw", "Audi", "Toyota", "Subaru"]

print("\nHere is the origina list:")
print(cars) # ['bmw', 'audi', 'toyota', 'subaru']

print("\nHere is the sorted list:")
print(sorted(cars)) # ['audi', 'bmw', 'subaru', 'toyota']

print("\nHere is the origina list again:")
print(cars) # ['bmw', 'audi', 'toyota', 'subaru']

cars.reverse()
print(cars) # ['subaru', 'toyota', 'audi', 'bmw']

length = len(cars)
print(length) # 4