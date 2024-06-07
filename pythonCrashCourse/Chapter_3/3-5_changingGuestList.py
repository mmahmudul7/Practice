guest_list = ["mahmud", "hasan", "shamim", "ibrahim"]

print(f"{guest_list[0].title()}, I would like to invite you to dinner.")
print(f"{guest_list[1].title()}, I would like to invite you to dinner.")
print(f"{guest_list[2].title()}, I would like to invite you to dinner.")
print(f"{guest_list[3].title()}, I would like to invite you to dinner.")

print(f"{guest_list[3].title()}, can't attent to the dinner.")

guest_list[3] = "Nazrul"
print(f"\n{guest_list[0].title()}, I would like to invite you to dinner.")
print(f"{guest_list[1].title()}, I would like to invite you to dinner.")
print(f"{guest_list[2].title()}, I would like to invite you to dinner.")
print(f"{guest_list[3].title()}, I would like to invite you to dinner.")
