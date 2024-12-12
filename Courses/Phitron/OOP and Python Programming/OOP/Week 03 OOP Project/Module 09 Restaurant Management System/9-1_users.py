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
        self.employees = [] # Database

    def add_employee(self, name, email, address, phone, age, designation, salary):
        # Employee class er akta object create hoye jabe
        employee = Employee(name, email, address, phone, age, designation, salary)
        self.employees.append(employee)
        print(f"\n{name} is added!!")

    def view_employee(self):
        print("Employee List!!")
        for emp in self.employees:
            print(emp.name, emp.email, emp.address, emp.phone)

ad = Admin("Hasan", "hasan@email.com", "Rajshai-2", 1750200)
ad.add_employee("Sagor", "s@email.com", "Dhaka", 45321, 32, "Chef", 1000)

ad.view_employee()