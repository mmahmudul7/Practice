def describe_pet(pet_name, animal_type):
    '''Display information about a pet.'''
    print(f"\nI have a {animal_type}.")
    print(f"My {animal_type}'s name is {pet_name.title()}.")
'''
describe_pet("hamster", "harry")
describe_pet("dog", "willie")
describe_pet(pet_name = "willie", animal_type = "dog")
'''
describe_pet(pet_name = "willie", animal_type = "harry")
#describe_pet()