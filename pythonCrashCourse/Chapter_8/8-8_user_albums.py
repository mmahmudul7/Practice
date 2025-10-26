def make_album(name, title, number = 0):
    dictionary = {
        "artist" : name.title(),
        "album" : title.title(),
    }
    if number:
        dictionary["number"] = number
    return dictionary

print("Please enter the artist, album name and amount of track")
print("You can quit this program any time to press 'q' option")

while True:
    artist_name = input("\nArtist name: ")
    if artist_name == "q":
        break

    album_name =  input("Album name: ")
    if album_name == "q":
        break

    track = input("Number of track: ")
    if track == "q":
        break

    output = make_album(artist_name, album_name, track)
    print(output)

print("\nThanks for responding!")