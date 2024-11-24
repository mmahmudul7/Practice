# varibaleName = value
age = 45
interest_rate = 2.5
name = "Mahmudul Hasan"
district = "Rajshahi Rajshahi"
is_single = True
is_sleeping = False

print(age + interest_rate)
print(district)
print()

# Type cast
print("Type Cast:")
print(type(age))
print(type(interest_rate))
print(type(name))
print(type(is_sleeping))

# Ctrl + / for single line comment
""" Alt + Shift + A
docString or Multi line comment
"""

# String Concat
print("My name is" + " " + "MD Mahmudul Hasan")

#fString
info = f"Mahmud's age is {age} living in {district}. Interesting with rate {interest_rate}%."

print(info)

# Convert number to string: str
num = 123
num_str = str(num)  # Convert to string
print(num_str)      # Output: '123'
print(type(num_str))  # Output: <class 'str'>

# Convert decimal number: float
num = 5
decimal_num = float(num)  # Convert to float
print(decimal_num)        # Output: 5.0
print(type(decimal_num))  # Output: <class 'float'>


# Valid conversion
num_str = "123.45"
print(float(num_str))  # Output: 123.45

# Invalid conversion
invalid_num = "123abc"
# print(float(invalid_num))  # Raises ValueError

# int vs float
# int
num_int = 10
print(type(num_int))  # Output: <class 'int'>

# float
num_float = 10.5
print(type(num_float))  # Output: <class 'float'>

# Conversion
converted_float = float(num_int)  # int to float
converted_int = int(num_float)    # float to int (decimal part is truncated)

print(converted_float)  # Output: 10.0
print(converted_int)    # Output: 10