from abc import ABC, abstractmethod

class Flyable(ABC):  # Interface হিসেবে কাজ করছে
    @abstractmethod
    def fly(self):
        pass

class Bird(Flyable):
    def fly(self):
        print("Bird flies in the sky.")

class Plane(Flyable):
    def fly(self):
        print("Plane flies in the sky.")