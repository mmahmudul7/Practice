# Reading Data Using json.loads()
from pathlib import Path
import json

path = Path('numbers.json')
contents = path.read_text()
numbers = json.loads(contents)

print(numbers)

# This is sample way to share data between two programs. (10 and 11)