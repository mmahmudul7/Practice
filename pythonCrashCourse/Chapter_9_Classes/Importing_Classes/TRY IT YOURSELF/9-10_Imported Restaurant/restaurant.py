"""
Imported Restaurant: Using your latest Restaurant class, store it in a module.
Make a separate file that imports Restaurant. Make a Restaurant instance, and call one
of Restaurant’s methods to show that the import statement is working properly.
"""

class Restaurant:
    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type

    def describe_restaurant(self):
        print(f"The restaurant name is: {self.restaurant_name}.")
        print(f"This restaurant cuisine type is: {self.cuisine_type}.")

    def open_restaurant(self):
        print(f"{self.restaurant_name} restaurent is open!")
