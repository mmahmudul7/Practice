class Shop:
    shopping_mall = 'Jamuna'

    def __init__(self, buyer):
        self.buyer = buyer
        self.cart = [] # cart is an instance attribute

    def add_to_cart(self, item):
        self.cart.append(item)

mahmud = Shop('Mahmudul Hasan')
mahmud.add_to_cart('shoes')
mahmud.add_to_cart('phone')
print(mahmud.cart)

hasan = Shop('Hasan Shamim')
hasan.add_to_cart('watch')
hasan.add_to_cart('cap')
print(hasan.cart)

kader = Shop('Kader Khan')
kader.add_to_cart('shirt')
kader.add_to_cart('pant')
print(kader.cart)