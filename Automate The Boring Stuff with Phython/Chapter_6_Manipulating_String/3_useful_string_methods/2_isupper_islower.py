# isupper and islower return Boolean value 
# At least akta letter thaka lagbe lowercase or uppercase judge korar jonno, otherwise Flase return korbe 

spam = 'Hello World!'
print(spam.islower())
print(spam.isupper())
print('HELLO'.isupper())
print('abc12345'.islower())
print('12345'.islower())
print('12345'.isupper())
print('$%^&;.//,'.isupper())

# Method uglo nijeraw string return kore
print()
print('Hello'.upper().lower())
print('Hello'.upper().lower().upper())
print('Hello'.lower().islower())
print('Hello'.lower().isupper())