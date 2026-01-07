class MinStack:

    def __init__(self):
        self.stack = []
        self.min_stack = []
        
    def push(self, val: int) -> None:
        self.stack.append(val)
        
        if len(self.min_stack) == 0:
            self.min_stack.append(val)
        else: # jodi agee theke minimum value thake then else
            current_min_val = self.min_stack[-1] # ager value ti current_min_val hoye jabe
            self.min_stack.append(min(val, current_min_val))
            # then new val and current_min_val er moddhe only minimum valutiy append hobe

    def pop(self) -> None:
        self.stack.pop()
        self.min_stack.pop()

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.min_stack[-1]


minStack = MinStack()   # MinStack()

minStack.push(-2)      # push(-2)
minStack.push(0)       # push(0)
minStack.push(-3)      # push(-3)

print(minStack.getMin())  # getMin() → -3

minStack.pop()            # pop()

print(minStack.top())     # top() → 0
print(minStack.getMin())  # getMin() → -2


'''
minStack = MinStack()

minStack.push(5)
print("Min:", minStack.getMin())   # 5

minStack.push(3)
print("Min:", minStack.getMin())   # 3

minStack.push(7)
print("Top:", minStack.top())      # 7
print("Min:", minStack.getMin())   # 3

minStack.pop()
print("Top after pop:", minStack.top())  # 3
print("Min after pop:", minStack.getMin())  # 3

minStack.pop()
print("Top after pop:", minStack.top())  # 5
print("Min after pop:", minStack.getMin())  # 5
'''