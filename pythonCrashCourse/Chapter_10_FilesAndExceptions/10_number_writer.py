# Storing Data Using json.dumps() 
from pathlib import Path
# json module
import json # JSON = JavaScript Object Notation

numbers = [2, 3, 4, 5, 11, 13]

path = Path('numbers.json')
contents = json.dumps(numbers) # json.dumps take only one argument. return a string
path.write_text(contents)