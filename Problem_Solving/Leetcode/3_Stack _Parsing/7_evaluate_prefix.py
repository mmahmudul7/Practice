# def evaluate_prefix(tokens):
#     token = tokens.pop(0)

#     if token in {"+", "-", "*", "/"}:
#         left = evaluate_prefix(tokens)
#         right = evaluate_prefix(tokens)

#         if token == "+":
#             return left + right
#         if token == "-":
#             return left - right
#         if token == "*":
#             return left * right
#         if token == "/":
#             return int(left / right)  # integer division

#     return int(token)


# print(evaluate_prefix("+ 3 4".split()))          # 7
# print(evaluate_prefix("* 3 + 4 5".split()))      # 27
# print(evaluate_prefix("/ - 3 4 + 5 2".split()))  # 0


# def evaluate_prefix(expr):
#     stack = []
#     str_list = expr.split()
#     rev_list = reversed(str_list)

#     for char in rev_list:
#         if char.isdigit():
#             digit = int(char)
#             stack.append(digit)
#         else:
#             a = stack.pop()
#             b = stack.pop()

#             if char == "+":
#                 sum = a + b
#                 stack.append(sum)
#             elif char == "-":
#                 sub = a - b
#                 stack.append(sub)
#             elif char == "*":
#                 mul = a * b
#                 stack.append(mul)
#             else:
#                 div = int(a / b)
#                 stack.append(div)
            
#     return stack[0]


# print(evaluate_prefix("+ 3 4"))          # 7
# print(evaluate_prefix("* 3 + 4 5"))      # 27
# print(evaluate_prefix("/ - 3 4 + 5 2"))  # 0


def evaluate_prefix(expr):
    if not expr.strip():
        raise ValueError("Empty Expression")
    
    stack = []
    str_list = expr.split()
    rev_list = reversed(str_list)

    for char in rev_list:
        if char.isdigit():
            digit = int(char)
            stack.append(digit)
        else:
            a = stack.pop()
            b = stack.pop()

            if char == "+":
                sum = a + b
                stack.append(sum)
            elif char == "-":
                sub = a - b
                stack.append(sub)
            elif char == "*":
                mul = a * b
                stack.append(mul)
            elif char == "/":
                if b == 0:
                    raise ZeroDivisionError("division by zero")
                div = int(a / b)
                stack.append(div)
            else:
                raise ValueError(f"Invalid operator")
    
    if len(stack) != 1:
        raise ValueError("Invalid expression")
            
    return stack[0]


# print(evaluate_prefix(""))
# print(evaluate_prefix(" "))
# print(evaluate_prefix("$ 3 1"))
# print(evaluate_prefix("/ 3 0"))
print(evaluate_prefix("+ 3 4"))          # 7
print(evaluate_prefix("* 3 + 4 5"))      # 27
print(evaluate_prefix("/ - 3 4 + 5 2"))  # 0
print(evaluate_prefix("10 6 9 3 + -11 * / * 17 + 5 +"))  # 0

