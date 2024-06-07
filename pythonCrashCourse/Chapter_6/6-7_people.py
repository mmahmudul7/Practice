person_1 = {
    "first_name" : "mahmudul",
    "last_name" : "hasan",
    "age" : "23",
    "city" : "rajshahi",
}
person_2 = {
    "first_name" : "ibrahim",
    "last_name" : "mahmud",
    "age" : "2",
    "city" : "dhaka",
}
person_3 = {
    "first_name" : "onku",
    "last_name" : "wanque",
    "age" : "33",
    "city" : "khulna",
}

peoples = [person_1, person_2, person_3]

for people in peoples:
    full_name = f"{people['first_name']} {people['last_name']}"
    print(f"\nHi, {full_name.title()}.")
    print(f"Your age is: {people['age']}.")
    print(f"You live in the: {people['city'].title()} city.")

'''
full_name = f"{person_1['first_name']} {person_1['last_name']}"
print(f"Hi, {full_name.title()}.")
print(f"Your age is: {person_1['age']}.")
print(f"You live in the: {person_1['city']} city.")
'''
