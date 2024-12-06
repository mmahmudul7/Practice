# Polymorphism শব্দ অর্থ "বহু রূপ"
# poly --> many (multiple)
# morph --> shape

class Animal:
    def speak(self):
        print("Animal makes a sound")

class Dog(Animal):
    def speak(self):  # Parent ক্লাসের মেথডকে ওভাররাইড করা হয়েছে
        print("Dog barks")

class Cat(Animal):
    def speak(self):
        print("Cat meows")

# Polymorphism in action
animals = [Dog(), Cat(), Animal()]
for animal in animals:
    animal.speak()  # Output:
                    # Dog barks
                    # Cat meows
                    # Animal makes a sound
