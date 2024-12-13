def call():
    print('calling someone')
    return 'call done'

class Phone:
    price = 12000
    color = 'blue'
    brand = 'samsung'
    features = ['camera', 'speaker', 'flast light']

    def call(self):
        print('calling by self')

    def send_sms(self, phone, sms):
        text = f'sending SMS to: {phone} and message: {sms}'
        return text

my_phone = Phone()

print(my_phone)
print(my_phone.price)
print(my_phone.color)
print(my_phone.brand)

my_phone.call()
sms = my_phone.send_sms('0170522011', 'This is test SMS!')
print(sms)