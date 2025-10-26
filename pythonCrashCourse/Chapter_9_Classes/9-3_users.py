"""9-3. 
Users: Make a class called User. Create two attributes called first_name and
last_name, and then create several other attributes that are typically stored in a user
profile. Make a method called describe_user() that prints a summary of the user’s
information. Make another method called greet_user() that prints a personalized
greeting to the user.
Create several instances representing different users, and call both methods for each
user.
"""
class User:
    def __init__(self, first_name, last_name, age, gender):
        self.first_name = first_name.title()
        self.last_name = last_name.title()
        self.age = age
        self.gender = gender.title()

    def describe_user(self):
        print(f"\nFirst Name: {self.first_name}")
        print(f"Last Name: {self.last_name}")
        print(f"Gender: {self.gender}")
        print(f"Age: {self.age}")
        
    def greet_user(self):
        print("\nWelcome back, " + self.first_name + "!")
        print()

mahmud = User("mahmudul", "hasan", 23, "male")
hasan = User("hasan", "shamim", 25, "male")
fatema = User("fatema", "mahmud", 2, "female")

mahmud.describe_user()
mahmud.greet_user()

hasan.describe_user()
hasan.greet_user()

fatema.describe_user()
fatema.greet_user()

