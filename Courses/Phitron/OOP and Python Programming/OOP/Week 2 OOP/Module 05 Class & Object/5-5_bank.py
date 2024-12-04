class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.min_withdraw = 500
        self.max_withdraw = 50000

    def get_balance(self):
        return self.balance
    
    def deposit(self, amount):
        if amount > 0:
            self.balance += amount

    def withdraw(self, amount):
        if self.balance < amount:
            print("You do not have sufficient balance.")
        elif amount < self.min_withdraw:
            print(f'Sorry, you can not withdraw blow {self.min_withdraw}')
        elif amount > self.max_withdraw:
            print(f'Sorry, you can not withdraw more than {self.max_withdraw}')
        else:
            self.balance -= amount
            print(f'Here is your money {amount}')
            print(f'Your balance after withdraw {self.get_balance()}')

cityBank = Bank(15000)
# cityBank.withdraw(400)
# cityBank.withdraw(51000)
cityBank.withdraw(1000)

dbbl = Bank(5000)
dbbl.deposit(2000)
dbbl.deposit(2000)
print("Your DBBL account balance is:", dbbl.get_balance())