# def lone_sum(a, b, c):
#   if a == b == c:
#     return 0
#   elif a == b:
#     return c
#   elif b == c:
#     return a
#   elif c == a:
#     return b
#   else:
#     return a + b + c
  
###########
def lone_sum(a, b, c):
    total = 0
    if a != b and a != c:
        total += a
        
    if b != a and b != c:
        total += b
        
    if c != a and c != b:
        total += c
        
    return total

# print(lone_sum(1, 2, 3))
print(lone_sum(3, 2, 3))
# print(lone_sum(3, 3, 3))