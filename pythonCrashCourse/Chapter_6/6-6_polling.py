favorite_laguages = {
    "jen" : "python",
    "sarah" : "c",
    "edward" : "rust",
    "phil" : "python",
}
for name, language in favorite_laguages.items():
    print(f"{name.title()}'s favorite language is {language.title()}.")
print()

coders = ['phil', 'josh', 'david', 'becca', 'sarah', 'matt', 'danielle']
for coder in coders:
    if coder in favorite_laguages.keys():
        print(f"Thank you for taking the poll, {coder.title()}!")
    else:
        print(f"{coder.title()}, what's your favorite programming language?")