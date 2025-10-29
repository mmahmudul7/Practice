from pathlib import Path

# Working with a File's Contents
# path = Path('pi_digits.txt')

# Working with a Large File 201 digits
path = Path('pi_204_digits.txt')

contents = path.read_text()
lines = contents.splitlines()

pi_string = ''
for line in lines:
    # pi_string += line
    pi_string += line.lstrip() # remove left side whitespaces

print(f"{pi_string[:52]}...")
print(len(pi_string))