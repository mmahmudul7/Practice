# define
def double_it(num):
    result = num * 2
    print(result) # Function with no return

double_it(8)
double_it(12)

def sum(num1, num2):
    result = num1 + num2
    return result

total = sum(33, 66)
print(total)

final = double_it(total)
print("Final value:", final) # Final value: None