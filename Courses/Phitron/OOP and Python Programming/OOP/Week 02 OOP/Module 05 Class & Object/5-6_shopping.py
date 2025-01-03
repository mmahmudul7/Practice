class Shopping:
    def __init__(self, name):
        self.name = name
        self.cart = []

    def add_to_cart(self, item, price, quantity):
        product = {'item': item, 'price': price, 'quantity': quantity}
        self.cart.append(product)

    def checkout(self, amount):
        total = 0
        for item in self.cart:
            # print(item)
            total += item['price'] * item['quantity']
        print('Total price', total)
        if amount < total:
            print(f'Please provide {total - amount} more')
        else:
            extra = amount - total
            print(f'Here is your items and extra money {extra}')

mahmud = Shopping('Mahmudul Hasan')
mahmud.add_to_cart('alu', 50, 6)
mahmud.add_to_cart('dim', 12, 24)
mahmud.add_to_cart('rice', 50, 5)

print(mahmud.cart)
# mahmud.checkout(600)
mahmud.checkout(1000)