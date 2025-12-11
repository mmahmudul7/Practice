guest_list = ["mahmud", "hasan", "shamim", "ibrahim"]

guest_list.insert(0, "onku")
guest_list.insert(3, "rafi")
guest_list.append("asif")

print(guest_list) # ['onku', 'mahmud', 'hasan', 'rafi', 'shamim', 'ibrahim', 'asif']
print("\nSorry, I can invite only 2 people for dinner. Because of the table size\n")

asif = guest_list.pop()
ibrahim = guest_list.pop()
shamim = guest_list.pop()
rafi = guest_list.pop()
hasan = guest_list.pop()

print(f"{asif.title()}, I am sorry, I can't invite you today's dinner.")
print(f"{ibrahim.title()}, I am sorry, I can't invite you today's dinner.")
print(f"{shamim.title()}, I am sorry, I can't invite you today's dinner.")
print(f"{rafi.title()}, I am sorry, I can't invite you today's dinner.")
print(f"{hasan.title()}, I am sorry, I can't invite you today's dinner.\n")

print(guest_list) # ['onku', 'mahmud']

print(f"\n{guest_list[0].title()}, I would like to still invite you to dinner.")
print(f"{guest_list[1].title()}, I would like to  still invite you to dinner.\n")

del guest_list[0]
del guest_list[0]

print("Here is the empty list: ", guest_list, "\n")
# Here is the empty list:  [] 