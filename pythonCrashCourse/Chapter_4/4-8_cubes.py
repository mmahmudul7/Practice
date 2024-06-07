cubes = []
for cube in range(1,11):
    cube = cube ** 3
    cubes.append(cube)

for cube in cubes:
    print(cube)
#####################
cubes = []
for cube in range(1,11):
    cubes.append(cube ** 3)

for cube in cubes:
    print(cube)
############################

# print([value **3 for value in range(1, 11)])
# print([cube **3 for cube in range(1, 11)])