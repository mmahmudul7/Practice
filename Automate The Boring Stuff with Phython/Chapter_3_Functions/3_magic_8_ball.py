import random

def get_answer(answer_number):
    if answer_number == 1:
        return 'It is certain'
    if answer_number == 2:
        return 'It is decidedly so'
    if answer_number == 3:
        return 'Yes'
    if answer_number == 4:
        return 'Reply hazy try again'
    if answer_number == 5:
        return 'Ask again later'
    if answer_number == 6:
        return 'Concentracte and ask again'
    if answer_number == 7:
        return 'Outlook not so good'
    if answer_number == 1:
        return 'Very doubtful'


r = random.randint(1, 9)
fortune = get_answer(r)
print(fortune)