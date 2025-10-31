# Handling the FileNotFoundError Exception 
from pathlib import Path

path = Path('alice.txt')
try:
    contents = path.read_text(encoding='utf-8')
    # encoding='utf-8' data loss বা decode error থেকে বাঁচায়
    # বিশেষ করে Bangla, Arabic, Chinese, emojis ইত্যাদি থাকলে।
except FileNotFoundError:
    print(f"Sorry, the file {path} does not exist.")
else:
    # Count the approximate number of words in the file: 
    words = contents.split() # split() produce a list of all the words
    num_words = len(words)
    print(f"The file {path} has about {num_words} words.")

