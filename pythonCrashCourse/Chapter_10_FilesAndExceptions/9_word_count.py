# Working with Multiple Files 
from pathlib import Path

def count_word(path):
    """Count the approximate number of words in a file."""
    try:
        contents = path.read_text(encoding='utf-8')
    except FileNotFoundError:
        print(f"Sorry, the file {path} does not exist.")
        # pass # Failing Silently 
    else:
        # Count the approximate number of words in the file: 
        words = contents.split() # split() produce a list of all the words
        num_words = len(words)
        print(f"The file {path} has about {num_words} words.")

filenames = ['alice.txt', 'siddartha.txt', 'pi_204_digits.txt', 'learning_python.txt']
for filename in filenames:
    path = Path(filename)
    count_word(path)