class Restaurant:
    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type

    def describe_restaurant(self):
        print(f"\nThe restaurant name is: {self.restaurant_name}.")
        print(f"This restaurant cuisine type is: {self.cuisine_type}.")

    def open_restaurant(self):
        print(f"{self.restaurant_name} restaurent is open!")

dorbar_hall = Restaurant("Dorbar Hall", "Chienese")
cookiejar = Restaurant("Cookie Jar", "Bangla")
chilise = Restaurant("Chilise", "Biriyani")

dorbar_hall.describe_restaurant()

cookiejar.describe_restaurant()

chilise.describe_restaurant()