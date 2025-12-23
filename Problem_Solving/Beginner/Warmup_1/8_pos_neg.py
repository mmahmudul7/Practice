# def pos_neg(a, b, negative):
#   if a < 0 and b < 0 and negative is True:
#     return True
#   elif a < 0 and b < 0 and negative is False:
#     return False
#   elif (a < 0 or b < 0) and negative is False:
#     return True
#   elif (a < 0 or b < 0) and negative is True:
#     return False
#   return False

def pos_neg(a, b, negative):
  if a < 0 and b < 0:
    if negative is True:
      return True
    else:
      return False
    
  if a < 0 or b < 0:
    if negative is False:
      return True
    else:
      return False
  return False
  

print(pos_neg(1, -1, False))
print(pos_neg(-1, 1, False))
print(pos_neg(-4, -5, True))