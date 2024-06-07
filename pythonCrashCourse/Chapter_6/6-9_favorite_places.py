favorite_places = {
    "mahmudl" : ["rashahi", "dhaka", "khulna"],
    "hasan" : ["ponchogor", "sirajgonj"],
    "shamim" : ["kazla", "RU", "VU"] ,
}

for name, places in favorite_places.items():
    print(f"\n{name.title()}'s favorite places are:")
    for place in places:
        print("-", place)