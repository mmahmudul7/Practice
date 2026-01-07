from collections import Counter

def word_count(text: str) -> dict:
    if not text:
        return {}

    words = text.split()
    return dict(Counter(words))


text = 'I am Md. Mahmudul Hasan. I love python'
words_count = word_count(text)
print(words_count)