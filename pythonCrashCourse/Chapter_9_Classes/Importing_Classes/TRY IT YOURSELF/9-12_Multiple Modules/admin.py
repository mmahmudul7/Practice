from user import User

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