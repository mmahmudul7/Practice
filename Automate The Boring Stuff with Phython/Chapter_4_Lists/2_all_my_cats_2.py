cat_names = []

while True:
    print('Enter the name of cat:' + ' / Or enter nothing to shop.')
    cat_name = input()

    if cat_name == '':
        break

    # cat_names = cat_names + [cat_name]
    cat_names.append(cat_name)

print("The cat names are:")
for name in cat_names:
    print(f" {name}")