# .get() is used to safely retrieve a value from a dictionary without raising a KeyError. 
# .get() retrieves a value without modifying the dictionary.

picnic_items = {'apples': 5, 'cups': 2}
print(f"I am bringing {picnic_items.get('cups', 0)} cups.")
# I am bringing 2 cups. 

print(f"I am bringing {picnic_items.get('eggs', 0)} eggs.")
# I am bringing 0 eggs.