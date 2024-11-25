def full_name(first, last):
    name = f"Full name is: {first} {last}"
    return name

# take parameter in order (serial wise)
name1 = full_name("Mahmudul", "Hasan")
name2 = full_name(last = "Hasan", first = "Mahmudul")
print(name1)
print(name2)

# def (**kargs)
def famous_name(first, last, **additon):
    name = f"{first} {last}"
    #print (additions)
    for key, value in additon.items():
        print(key, value)
    return name

name = famous_name(first="Mahmudul", last="Hasan", title="MD", surname="khan", homename="shamim")
print(name)

# def function_name(num1, num2, *args, **kargs)
# return multiple results from an array
def a_lot(num1, num2):
    sum = num1 + num2
    mul = num1 * num2
    sub = num1 - num2
    return sum, mul, sub
results = a_lot(55, 21)
print(results) # tuple

def a_lot2(num1, num2):
    sum = num1 + num2
    mul = num1 * num2
    sub = num1 - num2
    return [sum, mul, sub]
results = a_lot2(55, 21)
print(results) # list

