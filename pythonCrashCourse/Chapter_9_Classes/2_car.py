# Working with Classes and Instance 
class Car:
    """A smiple attempt to reresent a car."""

    def __init__(self, make , model, year):
        self.make = make
        self.model = model
        self.year = year
        self.odometer_reading = 0 # Default value of an Attribute

    def get_descriptive_name(self):
        """Return a neatly formatted descriptive name."""
        long_name = f"{self.year} {self.make} {self.model}"
        return long_name.title()
    
    def read_odometer(self):
        """Print a statement showing the car's mileage."""
        print(f"This car has {self.odometer_reading} miles on it.")

    # Modifying an Attribut's Value Through a Method
    def update_odometer(self, mileage):
        """
        Set the odometer reading to the given value.
        # Reject the change if it atempts to roll the odometer back.
        """
        if mileage >= self.odometer_reading:
            self.odometer_reading = mileage
        else:
            print("You can't roll back and odometer!")

    # Incrementing an Attribute's Value Through a Method 
    def increment_odometer(self, miles):
        """Add the given amount to the odometer reading."""
        self.odometer_reading += miles
    
my_new_car = Car('subaru', 'outback', 2019)
print(my_new_car.get_descriptive_name())

#my_new_car.update_odometer(-23) # For testing
my_new_car.update_odometer(23)# Modify an Attribut's value Directly
my_new_car.read_odometer()

print()
my_used_car = Car('subaru', 'outback', 2019)
print(my_used_car.get_descriptive_name())

my_used_car.update_odometer(23_500) # 23_500 presenting 23500
my_used_car.read_odometer()

my_used_car.increment_odometer(600)
my_used_car.read_odometer()