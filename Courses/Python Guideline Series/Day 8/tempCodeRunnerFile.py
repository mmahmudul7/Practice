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