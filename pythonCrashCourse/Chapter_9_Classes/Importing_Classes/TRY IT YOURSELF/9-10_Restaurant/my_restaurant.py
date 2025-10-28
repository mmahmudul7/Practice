from restaurant import Restaurant

restaurant = Restaurant("Master Chef", "Chienese")

print(f"{restaurant.restaurant_name} is one of the best hotel in Rajshahi")
print(f"They offering {restaurant.cuisine_type} foods.")
restaurant.describe_restaurant()
restaurant.open_restaurant()