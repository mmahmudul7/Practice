def get_formatted_name(first_name, last_name):
    full_name = f"{first_name} {last_name}"
    return full_name.title()

while True:
    print("\nPlease tell me your name:")
    print("(enter 'q' at any time to quit)")
    f_name = input("Frist Name: ")
    if f_name == "q":
        print("Thanks using our service!")
        break

    l_name = input("Last Name: ")
    if l_name == "q":
        print("Thanks using our service!")
        break

    formatter_name = get_formatted_name(f_name, l_name)
    print("\n",formatter_name)