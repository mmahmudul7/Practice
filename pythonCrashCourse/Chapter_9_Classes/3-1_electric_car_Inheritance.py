# Inheritance 
class Car: # Parent Class (Must apear befor the child calss)
    """A simple attempt to represent a car."""

    def __init__(self, make, model, year):
        """Initialize attributes to describe a car."""
        self.make = make
        self.model = model
        self.year = year
        self.odometer_reading = 0

    def get_descriptive_name(self):
        """Return a neatly formatted descriptive name."""
        long_name = f"{self.year} {self.make} {self.model}"
        return long_name.title()


class ElectricCar(Car): # Here ElectricCar is Child Class of Car Parent Class
    """Represent aspects of a car, specific t electric vechicles."""

    def __init__(self, make, model, year):
        """Initialize attributes of the parent class."""
        super().__init__(make, model, year)
        # super comes from a convention of calling the parent class a superclass
        # and the child class a subclass
        self.battery_size = 40 # Defining attribute

    def describe_battery(self): # Definining Method for the Child class
        """Print a statement describing the battery size."""
        print(f"This car has a {self.battery_size}-kWh battery.")


my_leaf = ElectricCar('nissan', 'leaf', 2024) # Call the __init__() method defined in the parent class Car.
print(my_leaf.get_descriptive_name()) # 2024 Nissan Leaf
my_leaf.describe_battery() # This car has a 40-kWh battery.