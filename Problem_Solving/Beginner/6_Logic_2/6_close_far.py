def close_far(a, b, c):
  if abs(a - b) <= 1:
    if abs(b - c) >= 2 and abs(c - a) >= 2:
      return True
  
  if abs(c - a) <= 1:
    if abs(a - b) >= 2 and abs(b - c) >= 2:
      return True
  
  return False


print(close_far(1, 2, 3))