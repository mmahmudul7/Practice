def last2(str):
  count = 0
  n = len(str)
  last2 = str[n-2:]
  
  for i in range(n-2):
    sub = str[i:i+2]
    if sub == last2:
      count += 1
    
  return count
