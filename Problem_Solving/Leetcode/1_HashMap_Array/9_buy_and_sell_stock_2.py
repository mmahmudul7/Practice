# def maxProfit(prices):
#     buy_price = prices[0] # vally
#     sell_price = prices[0] # peak
#     total_profit = 0
#     i = 0

#     while i < len(prices) - 1:
#         while i < len(prices) - 1 and prices[i] >= prices[i+1]: # prices = [7,1,5,3,6,4]
#             i += 1
#         buy_price = prices[i]
        
#         while i < len(prices) - 1 and prices[i] <= prices[i+1]: # prices = [7,1,5,3,6,4]
#             i += 1
#         sell_price = prices[i]
#         total_profit += sell_price - buy_price

#     return total_profit

def maxProfit(price):
    profit = 0

    for i in range(1, len(price)):
        if price[i] > price[i - 1]:
            profit += price[i] - price[i - 1]
    
    return profit

# prices = [7,6,4,3,1]
prices = [7,1,5,3,6,4]
total_profit = maxProfit(prices)
print(total_profit)