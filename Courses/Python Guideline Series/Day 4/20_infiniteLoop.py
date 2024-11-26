# 1. Conditon false hobe na
# 2. increment / decrement hobe na

for i in range(12,):
    print(i)

# for loop diye infinite loop possible na for python

# num = 3
# while num == 3:
#     print(num)

# while True:
#     print("Mahmudul Hasan")

while True:
    name = input("What is your name? ")
    if name == "Quit" or name == "q" or name == "quit":
        break
    print(f"Your name is: {name}")