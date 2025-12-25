def lucky_sum(a, b, c):
  if a == 13:
    return 0
  elif b == 13:
    return a
  if c == 13:
    return a + b
  else:
    return a + b + c
  

######
def lucky_sum(a, b, c):
    total = 0

    if a == 13:
        return 0
    total += a

    if b == 13:
        return total
    total += b

    if c == 13:
        return total
    total += c

    return total
