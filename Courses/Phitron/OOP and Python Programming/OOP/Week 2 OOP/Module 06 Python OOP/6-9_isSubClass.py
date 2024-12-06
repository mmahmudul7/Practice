# যদি ক্লাস A ক্লাস B থেকে উত্তরাধিকারী হয় কিনা, তা যাচাই করতে ব্যবহার হয়।
# Syntax --> issubclass(class, classinfo)

class Animal:
    pass

class Dog(Animal):  # Dog হল Animal-এর একটি সাবক্লাস।
    pass

class Car:
    pass

print(issubclass(Dog, Animal))  # True: Dog হল Animal-এর সাবক্লাস।
print(issubclass(Car, Animal))  # False: Car Animal-এর সাবক্লাস নয়।
print(issubclass(Dog, (Animal, Car)))  # True: Dog Animal বা Car-এর টুপলে অন্তর্ভুক্ত।