# continue statement (skip)

# for i in range(1, 11):
#     if i % 2 == 0:
#         continue
#     print(i)

while True:
    print('Who are you?')
    name = input() # Mahmud | # Jeo
    if name != 'Jeo': # 'Mahmudl' != 'Jeo' / True and execute continue statement | 'Jeo' = 'Jeo' / False and continue
        continue # niche sob kisu skip hoye loop abar o repeat hobe

    print('Hello, Joe. What is the password? (It is a fish.)')
    password = input()
    if password == 'swordfish': # 'abc123' == 'swordfish' / Flase => Loop repeat again.
        break

print('Access grandted.')

