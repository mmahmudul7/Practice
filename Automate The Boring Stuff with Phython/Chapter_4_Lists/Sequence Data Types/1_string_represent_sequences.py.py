# Immutable data type.
# It cannot be changed like mutable List data type

name = 'Zophie'

print(name[0])
print(name[-2])
print(name[0:4]) # slicing
print('Zo' in name)
print('z' in name)
print('p' not in name)

for i in name:
    print(f"* * * {i} * * *")
