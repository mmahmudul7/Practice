# Is your birthday contained in Pi?
from pathlib import Path

path = Path('pi_204_digits.txt')

contents = path.read_text()
lines = contents.splitlines()

pi_string = ''
for line in lines:
    pi_string += line.lstrip()
    
birthday = input("Enter your birthday, in the form mmddyy: ")
if birthday in pi_string:
    print("Your birthday appears in the first 204 digits of pi!")
else:
    print("Your birthday does not appears in the first 204 digits of pi.")