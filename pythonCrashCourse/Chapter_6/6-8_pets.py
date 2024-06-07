pets = []

pet = {
    "animal" : "cat",
    "owner" : "shamim",
}
pets.append(pet)

pet = {
    "animal" : "dog",
    "owner" : "hasan",
}
pets.append(pet)

for pet in pets:
    name = pet["animal"]
    print("The animal name is:", name.title() + "\nAnd owner name is:", pet["owner"] + "\n")

