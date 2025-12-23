def near_hundred(n):
  if 90 <= n <= 110 or 190 <= n <= 210:
    return True
  return False

#########
def near_hundred(n):
  return ((abs(100 - n) <= 10) or (abs(200 - n) <= 10))