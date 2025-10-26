# Overriding
class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year

class Battery: # Doesn't inherit from any other class
    """A simple attempt to model a battery  for an eletric car."""
    def __init__(self, battery_size=40):
        """Initialize the battery's attributes"""
        self.battery_size = battery_size

    def describe_battery(self):
        """Print a statement describing the battery size."""
        print(f"This car has a {self.battery_size}-kWh battery.")

    def get_range(self):
        """Print a statement about the range this battery provides."""
        if self.battery_size == 40:
            range = 150
        elif self.battery_size == 65:
            range = 225

        print(f"This car can go about {range} miles on a full charge.")

class ElectricCar(Car):
    def __init__(self, make, model, year):
        """Initialize attributes of the parent class."""
        super().__init__(make, model, year)
        self.battery = Battery() # Create a new instance of Battery class
        # with default size of 40

    def describe_battery(self):
        """Print a statement describing the battery size."""
        print(f"This car has a {self.battery_size}-kWh battery.")


my_leaf = ElectricCar('nissan', 'leaf', 2024)
my_leaf.battery.describe_battery() # look at the instance my_leaf
# find its battery attribute, and call the method describe_battery()
my_leaf.battery.get_range()