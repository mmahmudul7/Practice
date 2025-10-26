"""9-6. 
Ice Cream Stand: An ice cream stand is a specific kind of restaurant. Write a
class called IceCreamStand that inherits from the Restaurant class you wrote in Exercise
9-1 (page 162) or Exercise 9-4 (page 166). Either version of the class will work; just
pick the one you like better. Add an attribute called flavors that stores a list of ice
cream flavors. Write a method that displays these flavors. Create an instance of
IceCreamStand, and call this method
"""
class Restaurant:
    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type

class IceCreamStand(Restaurant):
    def __init__(self, restaurant_name, cuisine_type='ice cream'):
        super().__init__(restaurant_name, cuisine_type)
        self.flavors = [] # List attribute added

    def show_flavors(self):
        print("\nWe have the following flavors available:")
        for flavor in self.flavors: # Instance create self.flavors
            print(f"- {flavor.title()}")


master_chef = IceCreamStand('Master Chef')
master_chef.flavors = ['vanilla', 'chocolate', 'coffee', 'blueberry']
master_chef.show_flavors()