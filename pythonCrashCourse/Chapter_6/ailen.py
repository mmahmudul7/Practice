alien_0 = {"color" : "green", "points" : 5}
print(alien_0) # {'color': 'green', 'points': 5}
#new_points = alien_0["points"]
#print(f"You just earned {new_points} points!")

alien_0["x_position"] = 0
alien_0["y_position"] = 25
print(alien_0) # {'color': 'green', 'points': 5, 'x_position': 0, 'y_position': 25}
#################### Starting with an empty dictionary
alien_0 = {}
alien_0["color"] = "green"
alien_0["ponts"] = 5
print(alien_0) # {'color': 'green', 'ponts': 5}
################### Modifying values in a Dictionary 
alien_0 = {"color" : "green"}
print(f"The alien is {alien_0['color']}")

alien_0["color"] = "yellow"
print(f"The alien is {alien_0['color']}")