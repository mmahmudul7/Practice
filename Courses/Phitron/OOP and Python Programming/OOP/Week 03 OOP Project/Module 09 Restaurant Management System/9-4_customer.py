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


class Customer(User):
    def __init__(self, name, email, address, phone):
        super().__init__(name, email, address, phone)
        self.cart = None

    def view_menu(self, restaurent):
        restaurent.menu.show_menu()

    def add_to_cart(self, restaurent, item_name):
        item = restaurent.menu.find_item(item_name)
        if item:
            pass
        else:
            print("Item not found!")

    def view_cart(self):
        print("\t***View Cart***")
        print("Name\tPrice\tQuantity")
        for item, quantity in self.cart.items.items():
            print(f"{item.name}\t{item.price}\t{quantity}")
        print("Total Price: {self.cart.total_price}")


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

    def add_new_item(self, restaurent, item):
        restaurent.menu.add_menu_item(item)

    def remove_item(self, restaurent, item):
        restaurent.menu.remove_item(item)


class Restaurent:
    def __init__(self, name):
        self.name = name
        self.employees = [] # Database
        self.menu = FoodItem()

    def add_employee(self, employee):
        self.employees.append(employee)

    def view_employee(self):
        print("Employee List!!")
        for emp in self.employees:
            print(emp.name, emp.email, emp.address, emp.phone)


class Menu:
    def __init__(self):
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

    def show_menu(self):
        print("\t*****Menu*****")
        print("Name\tPrice\tQuantity")
        for item in self.items:
            print(f"{item.name}\t{item.price}\t{item.quantity}")


class FoodItem:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self. quantity = quantity


mn = Menu()
item = FoodItem("Pizza", 12.45, 10)
mn.add_menu_item(item)
mn.show_menu()