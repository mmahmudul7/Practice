# def maxProfit(prices) -> int:
#     max_profit = 0
#     n = len(prices)

#     for i in range(n):
#         for j in range(i+1, n):
#             if (prices[j] - prices[i]) > max_profit:
#                 max_profit = prices[j] - prices[i]
    
#     if max_profit > 0:
#         return max_profit
#     return 0

# def maxProfit(prices) -> int:
#     buy_price = float('inf')
#     max_profit = 0

#     for i in range(len(prices)):
#         if prices[i] < buy_price:
#             buy_price = prices[i]
#         elif prices[i] - buy_price > max_profit:
#             max_profit = prices[i] - buy_price

#     return max_profit


def maxProfit(pirce):
    buy_price = float('inf')
    max_profit = 0

    for price in prices:
        if price < buy_price:
            buy_price = price
        else:
            if price - buy_price > max_profit:
                max_profit = price - buy_price

    return max_profit


# prices = [7,6,4,3,1]
prices = [7,1,5,3,6,4]
profit = maxProfit(prices)
print(profit)