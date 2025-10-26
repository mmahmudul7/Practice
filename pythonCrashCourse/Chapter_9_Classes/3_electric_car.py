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
    
    def read_odometer(self):
        """Print a statement showing the car's mileage."""
        print(f"This car has {self.odometer_reading} miles on it.")

    def update_odometer(self, mileage):
        """Set the odometer reading to the given value."""
        if mileage >=  self.odometer_reading:
            self.odometer_reading = mileage
        else:
            print("You can't roll back an odometer!")

    def increment_odometer(self, miles):
        """Add the given amount to the odometer reading."""
        self.odometer_reading += miles

class ElectricCar(Car): # Here ElectricCar is Child Class of Car Parent Class
    """Represent aspects of a car, specific t electric vechicles."""

    def __init__(self, make, model, year):
        """Initialize attributes of the parent class."""
        super().__init__(make, model, year)
        # super comes from a convention of calling the parent class a superclass
        # and the child class a subclass


my_leaf = ElectricCar('nissan', 'leaf', 2024) # Call the __init__() method defined in the parent class Car.
print(my_leaf.get_descriptive_name())