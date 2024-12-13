class Calculator:
    brand = 'Casio MS990'

    def add(self, num1, num2):
        return num1 + num2

    def sub(self, num1, num2):
        return num1 - num2

    def mul(self, num1, num2):
        return num1 * num2

    def div(self, num1, num2):
        if num2 != 0:
            return num1 / num2
        else:
            return 'Infinite'
        
result = Calculator()

sum = result.add(2, 3)
ded = result.sub(3, 2)
mul = result.mul(2, 3)
div1 = result.div(5, 2)
div2 = result.div(2, 0)

print("Sum:", sum)
print("Sub:", ded)
print("Mul:", mul)
print("Div1:", div1)
print("Div2:", div2)