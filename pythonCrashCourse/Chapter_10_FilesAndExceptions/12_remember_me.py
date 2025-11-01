# Saving User Generated Data  
from pathlib import Path
import json

username = input("What is your name?\n") # Store user generated data

path = Path('username.json')
contents = json.dumps(username)
path.write_text(contents) # Save to username.json

print(f"We'll remember you when you come back, {username}")