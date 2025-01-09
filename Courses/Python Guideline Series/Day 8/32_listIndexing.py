rolls = [12, 20, 3, "Phitron"]
print(rolls[0])
print(rolls[-3])
# print(rolls[-20]) # highest - 4 howa possible
print(len(rolls))
rolls[-3] = 500 # change in memory

if 20 in rolls:
    print("Found")
else:
    print("Not Found")

print(rolls)

'''*******Traversing********'''
for i in rolls:
    print(i)

for i in range(len(rolls)):
    print(rolls[i])

for i in range(-1, -len(rolls) - 1, -1):
    print(rolls[i])

for i in range(len(rolls) - 1, -1, -1):
    print(rolls[i])

b = [[12, 13], [18, 23, "Phitron"], [-1, -19]]
        # 0               1               2

# find 13
print(b[0][1])

b[0][1] = 200
print(b[0][1])

b[0][2] = 300
print(b[0][2])