motorcycles = []

motorcycles.append("honda")
motorcycles.append("yamaha")
motorcycles.append("suzuki")

print(motorcycles) # ['honda', 'yamaha', 'suzuki']

#Inserting elements into a list
motorcycles.insert(0, "ducati")
print(motorcycles) # ['ducati', 'honda', 'yamaha', 'suzuki']

#Removing elements from a list
del motorcycles[0]
print(motorcycles) # ['honda', 'yamaha', 'suzuki']


del motorcycles[1]
print(motorcycles) # ['honda', 'suzuki']