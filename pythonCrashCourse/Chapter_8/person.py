def buid_person(first_name, last_name, age = None):
    person = {
        "first" : first_name,
        "last" : last_name,
    }

    if age:
        person["age"] = age

    return person

name = buid_person("hasan", "shamim", age=27)
print(name)
