def string_match(a, b):
  count = 0
  lowest_len = min(len(a), len(b))
  
  for i in range(lowest_len - 1):
    sub_a = a[i:i+2]
    sub_b = b[i:i+2]
    
    if sub_a == sub_b:
      count += 1
      
  return count