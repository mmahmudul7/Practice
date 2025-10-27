"""9-9. 
Battery Upgrade: Use the final version of electric_car.py from this section. Add a
method to the Battery class called upgrade_battery(). This method should check the
battery size and set the capacity to 65 if it isn’t already. Make an electric car with a
default battery size, call get_range() once, and then call get_range() a second time
after upgrading the battery. You should see an increase in the car’s range.
"""
class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year

class Battery:
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

    def upgrade_battery(self):
        if self.battery_size == 40:
            self.battery_size = 65
            print("Upgraded the battery to 65 kWh.")
        else:
            print("The battery is already upgraded.")

class ElectricCar(Car):
    def __init__(self, make, model, year):
        """Initialize attributes of the parent class."""
        super().__init__(make, model, year)
        self.battery = Battery() 


my_leaf = ElectricCar('nissan', 'leaf', 2024)
my_leaf.battery.describe_battery()
my_leaf.battery.get_range()

print("\nUpgrade the battery, and check the range again:")
my_leaf.battery.upgrade_battery()
my_leaf.battery.get_range()
