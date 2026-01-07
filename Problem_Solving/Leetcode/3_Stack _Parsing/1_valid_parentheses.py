# def isValid(s):
#     stack = []
#     mapping = {
#         ')': '(',
#         '}': '{',
#         ']': '['
#     }

#     for ch in s:
#         # যদি open bracket হয়
#         if ch in mapping.values():
#             stack.append(ch)
#         else:
#             # close bracket
#             # if not stack:
#             if len(stack) == 0:
#                 return False
#             top = stack.pop()
#             if mapping[ch] != top:
#                 return False

#     return len(stack) == 0

def isValid(s):
    stack = []
    stack_size = 0

    mapping = {
        ')': '(',
        '}': '{',
        ']': '['
    }

    for ch in s:
        if ch in mapping.values():
            stack.append(ch)
            stack_size += 1 # size update
        else:
            if stack_size == 0:
                return False
            top = stack.pop()
            stack_size -= 1      # size update
            if mapping[ch] != top:
                return False

    return stack_size == 0


s = "()[]{}"
# s = "([)]"
# s = "(]"
print(isValid(s))