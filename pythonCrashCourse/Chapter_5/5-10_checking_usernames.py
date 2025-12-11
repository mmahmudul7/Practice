current_users = ["jaden", "admin", "hasan", "mahmud", "shamim"]
new_users = ["faisal", "admin", "hasan", "arsidoo", "mmahmdul7"]

for new_user in new_users:
    if new_user in current_users:
        print(f"You need to enter a new username! instead of {new_user}")
    else:
        print("Congratulations! Your username is available")

#################
print("\n\tCase insensitive")

current_users = ["jaden", "Admin", "hasan", "mahmud", "shamim"]
new_users = ["faisal", "admin", "Hasan", "arsidoo", "mmahmdul7"]

current_users_lower = [user.lower() for user in current_users]
new_users_lower = [new_user.lower() for new_user in new_users]

for b_new_user in new_users_lower:
    if b_new_user in current_users_lower:
        print(f"Sorry, please enter a new username! instead of {b_new_user}")
    else:
        print("Congratulations! Your username is available")