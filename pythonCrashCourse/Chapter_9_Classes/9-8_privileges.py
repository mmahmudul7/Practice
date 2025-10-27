"""9-8. 
Privileges: Write a separate Privileges class. The class should have one
attribute, privileges, that stores a list of strings as described in Exercise 9-7. Move the
show_privileges() method to this class. Make a Privileges instance as an attribute in
the Admin class. Create a new instance of Admin and use your method to show its
privileges.
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
        self.privileges = Privileges() # Composition

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


mahmud = Admin('Mahmudul', 'Hasan', 23, 'male')
mahmud.privileges.show_privilleges()
print("\nAdding privileges...")
mahmud_privileges = ["can add post", "can delete post", "can ban user"]
mahmud.privileges.privileges = mahmud_privileges
mahmud.privileges.show_privilleges()