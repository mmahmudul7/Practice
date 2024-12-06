from abc import ABC, abstractmethod
# abc = abstract base class

# Abstract Class
class Vehicle(ABC):
    @abstractmethod # Enforce all derived class to have a start_engine method
    def start_engine(self):
        pass

    @abstractmethod
    def stop_engine(self):
        pass

# Concrete Class
class Car(Vehicle):
    def start_engine(self):
        print("Car engine started.")

    def stop_engine(self):
        print("Car engine stopped.")

# Using the classes
my_car = Car()
my_car.start_engine()
my_car.stop_engine()