favorite_number = {
    "mahmud" : [7, 77, 777],
    "hasan" : [9, 99, 999, 999,],
    "shamim" : [3, 33, 333, 333, 333],
    "ibrahim" : [1, 11, 111, 1111, 111],
    "nazrul" : [5, 55, 555, 5555, 55555],
}

for name, numbers in favorite_number.items():
    print(f"\n{name.title()}'s favorite numbers are:")
    for number in numbers:
        print("- " + str(number))