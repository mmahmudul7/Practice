"""9-5. 
Login Attempts: Add an attribute called login_attempts to your User class from
Exercise 9-3 (page 162). Write a method called increment_login_attempts() that
increments the value of login_attempts by 1. Write another method called
reset_login_attempts() that resets the value of login_attempts to 0.
Make an instance of the User class and call increment_login_attempts() several times.
Print the value of login_attempts to make sure it was incremented properly, and then
call reset_login_attempts(). Print login_attempts again to make sure it was reset to 0.
"""

class User:
    def __init__(self, first_name, last_name, age, gender):
        self.first_name = first_name.title()
        self.last_name = last_name.title()
        self.age = age
        self.gender = gender.title()
        self.login_attempts = 0

    def describe_user(self):
        print(f"\nFirst Name: {self.first_name}")
        print(f"Last Name: {self.last_name}")
        print(f"Gender: {self.gender}")
        print(f"Age: {self.age}")
        
    def greet_user(self):
        print("\nWelcome back, " + self.first_name + "!")
        
    def increment_login_attempts(self):
        self.login_attempts += 1
        
    def reset_login_attempts(self):
        self.login_attempts = 0
        
ibrahim = User("ibrahim", "mahmud", 3, "male")

ibrahim.describe_user()
ibrahim.greet_user()

print("\nMaking 3 login attempts...")
ibrahim.increment_login_attempts()
ibrahim.increment_login_attempts()
ibrahim.increment_login_attempts()
print("\tLogin attempts:", ibrahim.login_attempts)

print("\nResetting login attempts...")
ibrahim.reset_login_attempts()
print("\tLogin attempts:", ibrahim.login_attempts)
