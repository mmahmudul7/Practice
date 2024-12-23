class Customer:
    def __init__(self, name, email, address):
        self.name = name  # Customer name
        self.email = email  # Customer email
        self.address = address  # Customer address
        self.balance = 0  # Initial balance
        self.orders = []  # List to store past orders

    def add_balance(self, amount):
        self.balance += amount

    def place_order(self, menu, order_items):
        total_cost = sum(menu[item] for item in order_items)
        if total_cost > self.balance:
            return "Insufficient balance."
        self.balance -= total_cost
        self.orders.append(order_items)
        return "Order placed successfully."

    def view_orders(self):
        return self.orders

class Admin:
    def __init__(self, name):
        self.name = name

    def create_customer_account(self, customers, name, email, address):
        if name in customers:
            return "Customer already exists."
        customers[name] = Customer(name, email, address)
        return f"Customer {name} added."

    def remove_customer_account(self, customers, name):
        if name in customers:
            del customers[name]
            return f"Customer {name} removed."
        return "Customer not found."

    def view_all_customers(self, customers):
        return [name for name in customers]

    def manage_menu(self, menu, item, price):
        menu[item] = price
        return f"{item} updated/added to menu."

    def remove_menu_item(self, menu, item):
        if item in menu:
            del menu[item]
            return f"{item} removed from menu."
        return "Item not found in menu."

class Restaurant:
    def __init__(self):
        self.menu = {
            "Burger": 5.0,
            "Pizza": 8.0,
            "Pasta": 7.5,
            "Salad": 4.0,
            "Cola": 1.5
        }
        self.customers = {}

    def show_menu(self):
        return self.menu

    def add_customer(self, name, email, address):
        if name not in self.customers:
            self.customers[name] = Customer(name, email, address)
            return f"Customer {name} added."
        return "Customer already exists."

    def remove_customer(self, name):
        if name in self.customers:
            del self.customers[name]
            return f"Customer {name} removed."
        return "Customer not found."

    def view_customer_details(self):
        return self.customers.keys()

restaurant = Restaurant()
admin = Admin("Admin")

while True:
    print("\n--- Restaurant Management System ---")
    print("1. Admin Login")
    print("2. Customer Login")
    print("3. Exit")
    option = input("Select an option: ")

    if option == "1":
        admin_name = input("Enter Admin Name: ")
        if admin_name == admin.name:
            while True:
                print("\n--- Admin Menu ---")
                print("1. Create Customer Account")
                print("2. Remove Customer Account")
                print("3. View All Customers")
                print("4. Manage Restaurant Menu")
                print("5. Exit")
                admin_option = input("Select an option: ")
                
                if admin_option == "1":
                    name = input("Enter customer name: ")
                    email = input("Enter email: ")
                    address = input("Enter address: ")
                    print(admin.create_customer_account(restaurant.customers, name, email, address))

                elif admin_option == "2":
                    name = input("Enter customer name to remove: ")
                    print(admin.remove_customer_account(restaurant.customers, name))

                elif admin_option == "3":
                    print("Registered Customers:")
                    for customer in admin.view_all_customers(restaurant.customers):
                        print(customer)

                elif admin_option == "4":
                    print("\n--- Manage Restaurant Menu ---")
                    print("1. Add/Update Item")
                    print("2. Remove Item")
                    print("3. View Menu")
                    menu_option = input("Select an option: ")

                    if menu_option == "1":
                        item = input("Enter item name: ")
                        price = float(input("Enter item price: "))
                        print(admin.manage_menu(restaurant.menu, item, price))

                    elif menu_option == "2":
                        item = input("Enter item name to remove: ")
                        print(admin.remove_menu_item(restaurant.menu, item))

                    elif menu_option == "3":
                        print("Restaurant Menu:")
                        for item, price in restaurant.show_menu().items():
                            print(f"{item}: ${price}")
                elif admin_option == "5":
                    break

    elif option == "2":
        customer_name = input("Enter Customer Username: ")
        if customer_name in restaurant.customers:
            customer = restaurant.customers[customer_name]
            while True:
                print(f"\n--- {customer.name}'s Menu ---")
                print("1. View Restaurant Menu")
                print("2. View Balance")
                print("3. Add Balance")
                print("4. Place Order")
                print("5. View Past Orders")
                print("6. Exit")
                customer_option = input("Select an option: ")

                if customer_option == "1":
                    print("\n--- Restaurant Menu ---")
                    for item, price in restaurant.show_menu().items():
                        print(f"{item}: ${price}")
                elif customer_option == "2":
                    print(f"Current Balance: ${customer.balance}")
                elif customer_option == "3":
                    amount = float(input("Enter amount to add: "))
                    customer.add_balance(amount)
                    print(f"${amount} added. New balance: ${customer.balance}")
                elif customer_option == "4":
                    print("Available Items:")
                    for item in restaurant.show_menu():
                        print(item)
                    order_items = input("Enter items to order (comma separated): ").split(", ")
                    print(customer.place_order(restaurant.menu, order_items))
                elif customer_option == "5":
                    print("Past Orders:")
                    for order in customer.view_orders():
                        print(", ".join(order))
                elif customer_option == "6":
                    break
        else:
            print("Customer not found.")

    elif option == "3":
        break