animals = ["cow", "hen", "goat"]

for animal in animals:
    print(f"A {animal.title()} would make a great pet")

print("Any of these animals would make a great pet")
########
animals = ["dog", "lion", "tiger"]
for animal in animals:
    #print(animal.title())
    
    print("{} has four legs".format(animal.title()))
print("All these have tails")