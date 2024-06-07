def make_sandwiches(*items):
    print("\nI'll make you a great sandwich:")
    for item in items:
        print("  ...adding " + item + " to your sandwich.")
    print("Your sandwich is ready!")

make_sandwiches('roast beef', 'cheddar cheese', 'lettuce', 'honey dijon')
make_sandwiches('turkey', 'apple slices', 'honey mustard')
make_sandwiches('peanut butter', 'strawberry jam')