alien_0 = {"color" : "green", "speed" : "slow"}
#print(alien_0["points"])
print(alien_0.get("points"))

point_value = alien_0.get("points", "No point value assigned.")
print(point_value)
