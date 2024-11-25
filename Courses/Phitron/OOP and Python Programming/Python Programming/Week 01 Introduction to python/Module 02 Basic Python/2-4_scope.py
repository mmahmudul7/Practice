# global veriable
walletBlance = 3000

def buy_products(item, price):
    #local scope veriable
    # you can access global veriable without using the global keyword
    phone = "smartPhone"

    # If you want to modify global veriable, you have to use the global keyword
    global walletBlance
    print(f"Previous balance is: {walletBlance}")
    walletBlance = walletBlance - price
    print(f"Blance after buying {item} left", walletBlance)

# print
buy_products("sunGlass", 1000)
print(walletBlance)