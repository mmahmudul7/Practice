first_money = input("Kodom Ali, Dost kisu taka dey: ")
second_money = input("Mahmudul Hasan, Dost kisu taka dey: ")

print(type(first_money))
# By default the input from user will be string type.
print("Money I got from Kodom", first_money, "and from Hasan", second_money)
first_money_int = int(first_money)
second_money_int = int(second_money)

total = first_money_int + second_money_int
print("Total money i got: ", total)