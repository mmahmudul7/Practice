#just find a way to use every function dammit

rivers = []
rivers.append("nile")
rivers.append("mississippi")
rivers.insert(0,"snake")
rivers.insert(1,"severn")

print(rivers) # ['snake', 'severn', 'nile', 'mississippi']
message = "The " + rivers[0].title() + " and " + rivers[3].title() + " are in the US."
print(message) # The Snake and Mississippi are in the US.
print(sorted(rivers)) # ['mississippi', 'nile', 'severn', 'snake'] - sort hoise kintu sort store hoini 
not_us = rivers.pop(2)
message = "The " + not_us.title() + " is in Egypt."
print(message) # The Nile is in Egypt.
rivers.sort()
print(rivers) # ['mississippi', 'severn', 'snake']
rivers.remove('severn')
print(rivers) # ['mississippi', 'snake']