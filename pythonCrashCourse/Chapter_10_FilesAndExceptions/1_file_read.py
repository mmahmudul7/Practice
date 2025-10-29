# Read the contents of a File 
from pathlib import Path
# Here pathlib is a Module of python library and Path is a class of Module pathlib


# path = Path('pi_digits.txt') # Working with current/same directory files only
# path = Path('text_files/name.txt') # Relative File Path
path = Path('C:/Users/Public/Downloads/absolute.txt') # Absolute File Path
# Use forward slashes instead of back slashes for windows user 

# contents = path.read_text()
# contents = contents.rstrip() # remove the extra blank line
contents = path.read_text().rstrip() # method chaining
print(contents)