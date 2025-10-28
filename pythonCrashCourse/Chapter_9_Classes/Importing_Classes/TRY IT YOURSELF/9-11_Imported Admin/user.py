"""9-11.
Imported Admin: Start with your work from Exercise 9-8 (page 173). Store the
classes User, Privileges, and Admin in one module. Create a separate file, make an
Admin instance, and call show_privileges() to show that everything is working correctly.
"""
class User:
    def __init__(self, first_name, last_name, age, gender):
        self.first_name = first_name.title()
        self.last_name = last_name.title()
        self.age = age
        self.gender = gender.title()

class Admin(User):
    def __init__(self, first_name, last_name, age, gender):
        super().__init__(first_name, last_name, age, gender)
        self.privileges = Privileges()

class Privileges():
    def __init__(self, privileges=[]):
        self.privileges = privileges

    def show_privilleges(self):
        print("Privillages:")
        if self.privileges:
            for privillege in self.privileges:
                print(f"- {privillege}")
        else:
            print("- This user has no privileges.")

