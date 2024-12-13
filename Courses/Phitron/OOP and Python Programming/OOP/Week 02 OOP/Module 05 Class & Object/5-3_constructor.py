class Phone:
    manufacture = 'China'

    #Constructor
    def __init__(self, owner, brand, price):
        self.owner = owner
        self.brand = brand
        self.price = price

    def send_sms(self, phone, sms):
        text = f'sending to: {phone} and text is: {sms}'
        print(text)

my_phone = Phone('Mahmudul Hasan', 'Nokia', 9800)
print(my_phone.owner, my_phone.brand, my_phone.price)

her_phone = Phone('Wife of Mahmud', 'iPhone', 19800)
print(her_phone.owner, her_phone.brand, her_phone.price)

dad_phone = Phone('Abbu', 'Sumsung', 64000)
print(dad_phone.owner, dad_phone.brand, dad_phone.price)