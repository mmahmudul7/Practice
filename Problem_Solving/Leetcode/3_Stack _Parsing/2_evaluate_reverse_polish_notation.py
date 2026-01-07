class Solution:
    def evalRPN(self, tokens):
        stack = []

        for token in tokens:
            if token in '+-/*':
                b = stack.pop()
                a = stack.pop()

                if token == '+':
                    sum = a + b
                    stack.append(sum)
                elif token == '-':
                    sub = a - b
                    stack.append(sub)
                elif token == '*':
                    mul = a * b
                    stack.append(mul)
                else:
                    div = int(a / b)
                    stack.append(div)
            else:
                stack.append(int(token))

        return stack[0]