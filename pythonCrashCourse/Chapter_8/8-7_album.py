def make_album(name, title, number = None):
    dictionary = {
        "artist" : name,
        "album" : title,
    }
    if number:
        dictionary["number"] = number
    return dictionary

output = make_album("tahsan", "alo", number=12)
print(output)

output = make_album("jemes", "ganstar")
print(output)

output = make_album("partho", "obela")
print(output)