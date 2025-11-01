"""10-12. 
Favorite Number Remembered: Combine the two programs you wrote in
Exercise 10-11 into one file. If the number is already stored, report the favorite number
to the user. If not, prompt for the user’s favorite number and store it in a file. Run the
program twice to see that it works.
"""
from pathlib import Path
import json

path = Path('favorite_number.json')
try:
    contents = path.read_text()
except FileNotFoundError:
    favorite_number = input("Enter your favorite number please: ")
    contents = json.dumps(favorite_number)
    path.write_text(contents)
    print("Thanks! I'll remember that number.")
else:
    fav_num = json.loads(contents)
    print(f"I know your favorite number! It’s {fav_num}.")
