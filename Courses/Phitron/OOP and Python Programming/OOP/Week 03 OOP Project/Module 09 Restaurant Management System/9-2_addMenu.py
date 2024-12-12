# Customer
# Employee
# Admin

from abc import ABC

class User(ABC):
    def __init__(self, name, email, address, phone):
        self.name = name
        self.email = email
        self.address = address
        self.phone = phone

class Employee(User):
    def __init__(self, name, email, address, phone, age, designation, salary):
        super().__init__(name, email, address, phone)
        self.age = age
        self.designatoin = designation
        self.salary = salary

# emp = Employee("Mahmud", "mahmud@gmail.com", "Rajshahi", 1750100, 23, "Software Engr", 10000)
# print(emp.email)

class Admin(User):
    def __init__(self, name, email, address, phone):
        super().__init__(name, email, address, phone)

    def add_employee(self, restaurent, employee):
        restaurent.add_employee(employee)

    def view_employee(self, restaurent):
        restaurent.view_employee()


class Restaurent:
    def __init__(self, name):
        self.name = name
        self.employees = [] # Database

    def add_employee(self, employee):
        self.employees.append(employee)

    def view_employee(self):
        print("Employee List!!")
        for emp in self.employees:
            print(emp.name, emp.email, emp.address, emp.phone)


class Menu:
    self.items = [] # Database of items

    def add_menu_item(self, item):
        self.items.append(item)

    def find_item(self, item_name):
        for item in self.items:
            if item.name.lower() == item_name.lower():
                return item
        return None
    
    def remove_item(self, item_name):
        item = self.find_item(item_name)
        if item:
            self.items.remove(item)
            print("Item deleted")
        else:
            print("Item not found")

ad = Admin("Hasan", "hasan@email.com", "Rajshai-2", 1750200)
ad.add_employee("Sagor", "s@email.com", "Dhaka", 45321, 32, "Chef", 1000)

ad.view_employee()