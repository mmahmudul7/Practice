"""9-12.
Multiple Modules: Store the User class in one module, and store the Privileges
and Admin classes in a separate module. In a separate file, create an Admin instance
and call show_privileges() to show that everything is still working correctly.
"""
class User:
    def __init__(self, first_name, last_name, age, gender):
        self.first_name = first_name.title()
        self.last_name = last_name.title()
        self.age = age
        self.gender = gender.title()
