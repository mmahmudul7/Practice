# Reading User Generated Data  
from pathlib import Path
import json

path = Path('username.json') # Read the data
contents = path.read_text()
username = json.loads(contents) # Recover data assign to username

print(f"Welcome back, {username}")