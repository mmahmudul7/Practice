def fix_teen(n):
  if n == 15 or n ==16:
    return n
  if n in range(13, 20):
    return 0
  return n

def no_teen_sum(a, b, c):
  x = fix_teen(a)
  y = fix_teen(b)
  z = fix_teen(c)
  
  return x + y + z


##########
def fix_teen(n):
  if 13 <= n <= 19 and n != 15 and n !=16:
    return 0
  return n

def no_teen_sum(a, b, c):
  return fix_teen(a) + fix_teen(b) + fix_teen(c)