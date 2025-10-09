players = ["charles", "martina", "michael", "florence", "eli"]

print(players) #Original list
print(players[0:3]) #The frist three players
print(players[1:4]) #The second, third, and fourth items in a list
print(players[:4]) #1st four items in a list
print(players[2:]) #All items from the third item
print(players[-3:]) #Last three players/items
print(players[1:4:2]) # ['martina', 'florence']

for player in players[:3]:
    print(player.title())