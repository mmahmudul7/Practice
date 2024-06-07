"""
# Start with some desings that need to be printed.
unprinted_designs = ["phone case", "robot pendant", "dodecahedron"]
completed_models = []

# Simulate printing each design, until none are left.
# Move each design to completed_models after printing
while unprinted_designs:
    current_design = unprinted_designs.pop()
    print(f"Printing model: {current_design}")
    completed_models.append(current_design)

# Display all completed models.
print("\nThe following models have been printed:")
for completed_model in completed_models:
    print(completed_model)
######################################################"""
import printing_functions as pf

unprinted_designs = ["phone case", "robot pendant", "dodecahedron"]
completed_models = []

print("Unprinted Designs List before the process: ", unprinted_designs)
print("Completed Designs List before the process: ", completed_models)
print()

pf.print_models(unprinted_designs[:], completed_models)
pf.show_completed_models(completed_models)

print()
print("Unprinted Designs List After the process: ", unprinted_designs)
print("Completed Designs List After the process: ", completed_models)
