my_foods = ["pizza", "falafel", "carrot cake"]
friend_foods = my_foods[:]

my_foods.append("cannoli")
friend_foods.append("ice cream")

print("My favorite foods are: ")
print(my_foods)
for myFood in my_foods:
    print("- " + myFood)

print("\nMy friend's favorite foods are: ")
print(friend_foods)
for friendFood in friend_foods:
    print("- " + friendFood)
