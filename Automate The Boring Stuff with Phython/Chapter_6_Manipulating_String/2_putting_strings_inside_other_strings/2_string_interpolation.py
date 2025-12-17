# Sting interpolation doesn't have to be called str() to convert value to string 

name = 'Mahmud'
age = 4000

msg = 'Hello, my name is %s. I am %s years old!' % (name, age + 1)
print(msg)