class Calculator:
    def add(self, a, b, c=0):  # একই মেথড, আলাদা আর্গুমেন্ট
        return a + b + c

calc = Calculator()
print(calc.add(2, 3))       # আউটপুট: 5
print(calc.add(2, 3, 4))    # আউটপুট: 9