from pathlib import Path
import json

path = Path('favorite_number.json')
contents = path.read_text()
fav_num = json.loads(contents)
print(f"I know your favorite number! It’s {fav_num}.")