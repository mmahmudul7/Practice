ages = [26, 57, 92, 54, 22, 15, 17, 80, 47, 73]
ages.sort()
print(ages)

assert ages[0] <= ages[-1]
# assert ages[-1] <= ages[0]
print("Assertion passed")

ages.reverse()
print(ages)
assert ages[0] <= ages[-1] # AssertionError
print("This will not run") # to run use "python -O myscript.py" command