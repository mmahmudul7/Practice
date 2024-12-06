# Encapsulation --> hide details
# Acess modifier: public, protected, private

class Bank:
    def __init__(self, holder_name, initial_deposit):
        self.holder_name = holder_name # public attribute
        self._branch_name = 'babani 11' # protected
        self.__balance = initial_deposit # private

    def desposit(self, amount):
        self.__balance += amount

    def get_balance(self):
        return self.__balance
    
    def withdraw(self, amount):
        if amount < self.__balance:
            self.__balance = self.__balance - amount
            return amount
        else:
            return f'You do not have sufficient balance'
        
mahmud = Bank('Mahmudl Hasan', 10000)
print(mahmud.holder_name)

mahmud.holder_name = "Hasan Shamim"
print(mahmud.holder_name)

mahmud.desposit(40000)
print(mahmud.get_balance())

print(mahmud._branch_name)

# print(dir(mahmud))
print(mahmud._Bank__balance)