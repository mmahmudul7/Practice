class Restaurant:
    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type

    def describe_restaurant(self):
        print(f"The restaurant name is: {self.restaurant_name}.")
        print(f"This restaurant cuisine type is: {self.cuisine_type}.")

    def open_restaurant(self):
        print(f"{self.restaurant_name} restaurent is open!")

restaurant = Restaurant("Master Cef", "Chienese")

print(f"{restaurant.restaurant_name} is one of the best hotel in Rajshahi")
print(f"They offering {restaurant.cuisine_type} foods.")
restaurant.describe_restaurant()
restaurant.open_restaurant()