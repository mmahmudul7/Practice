"""9-7. 
Admin: An administrator is a special kind of user. Write a class called Admin that
inherits from the User class you wrote in Exercise 9-3 (page 162) or Exercise 9-5 (page
167). Add an attribute, privileges, that stores a list of strings like "can add post", "can
delete post", "can ban user", and so on. Write a method called show_privileges() that
lists the administrator’s set of privileges. Create an instance of Admin, and call your
method.
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

class Admin(User):
    def __init__(self, first_name, last_name, age, gender):
        super().__init__(first_name, last_name, age, gender)
        self.privileges = []

    def show_privilleges(self):
        print("Display your privillages:")
        for privillege in self.privileges:
            print(f"- {privillege}")


mahmud = Admin('Mahmudul', 'Hasan', 23, 'male')
mahmud.privileges = ["can add post", "can delete post", "can ban user"]
mahmud.show_privilleges()