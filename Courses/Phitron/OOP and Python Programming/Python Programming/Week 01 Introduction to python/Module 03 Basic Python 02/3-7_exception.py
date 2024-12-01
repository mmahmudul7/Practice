# https://docs.python.org/3/tutorial/errors.html
try:
    # result = 45/0
    result = 45/5
except:
    print("Error happeded!")
finally:
    print("Final Message")
