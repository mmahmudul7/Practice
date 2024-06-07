favorite_laguages = {
    "jen" : "python",
    "sarah" : "c",
    "edward" : "rust",
    "phil" : "python",
}
#print(favorite_laguages)
language = favorite_laguages["sarah"].title()
print(f"Shara's favorite language is {language}.\n")
####### using for loop
for name, lang in favorite_laguages.items():
    print(f"{name.title()}'s favorite language is {lang.title()}.")
######### All the Keys in Dectionary
print()
for name in favorite_laguages.keys():
    print(name.title())
print() ####### without keys() method
for name in favorite_laguages:
    print(name.title())
print() # print a message for firends
friends = ["phil", "sarah"]
for name in favorite_laguages.keys():
    print(f"Hi {name.title()}.")

    if name in friends:
        language = favorite_laguages[name].title()
        print(f"\t{name.title()}, I see you love {language}!")

if "erin" not in favorite_laguages.keys():
    print("\nErin, please take our poll!")
print() #using sorted() function

for name in sorted(favorite_laguages.keys()):
    print(f"{name.title()}, thank you for taking the poll.")

print() #using values() function
print("The following languages have been mentioned:")
for language in favorite_laguages.values():
    print(language.title())

print() #using set() and values() function to getting unique result only
print("The following languages have been mentioned:")
for language in set(favorite_laguages.values()):
    print(language.title())