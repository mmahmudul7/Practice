dimensions = (200, 50)
print(dimensions[0])
print(dimensions[1])

print("Original dimensions:")
for dimension in dimensions:
    print("Value of for loop: ", dimension)

print("\nModified dimensions:")
dimensions = (400, 100)
for dimension in dimensions:
    print(dimension)

# dimensions[0] = 250 

print()
my_t = (3, )
print(my_t[0])