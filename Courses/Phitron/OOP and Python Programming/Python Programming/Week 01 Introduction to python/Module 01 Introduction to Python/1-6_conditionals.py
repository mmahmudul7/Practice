# >, <, >=, <=, ==, !=
# in, not, not in, is, is not
# and, or

a = 7
if a > 5:
    print("Geater than 5")
    print("True area")
else:
    print("Less than 5")
    print("False area")

a = 7
if a > 7:
    print("Geater than 7")
elif a < 7:
    print("Less than 7")
elif a == 7:
    print("Value is exactly 7")
else:
    print("Noting else")

boss = True

if boss is True:
    print("I am doing right now!")
else:
    print("I will after lunch!")

if boss is False:
    print("I will after lunch!")
else:
    print("I am doing right now!")

coin = "head"
# nested conditons
if boss == True:
    print("Boss you are joss")
    if coin == "head":
        print("Batting")
    else:
        print("Bowling")
else:
    print("You are not Boss!")

digit = 12
# digit = 8
# range = 0 to 10
if digit % 2 == 0 and digit < 10:
    print("even and valid range")
elif digit % 2 == 1 or digit == 1 and digit < 10:
    print("odd")
else:
    print("Out of range")