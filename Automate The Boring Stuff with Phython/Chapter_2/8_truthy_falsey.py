name = '' # 0 / 0.00

while not name: # not '' / True
    print('Enter your name:')
    name = input() # input a empty hole, loop punoray cholbe

    print('How many guests will you have?')
    num_of_guests = int(input()) # 0 / False, otherwise True
    
    if num_of_guests:
        print('Be sure to have enough room for all your guests.')

print('Done')