def end_other(a, b):
  s1 = a.lower()
  s2 = b.lower()
  
  return s1.endswith(s2) or s2.endswith(s1)


##
def end_other(a, b):
  a = a.lower()
  b = b.lower()
  a_len = len(a)
  b_len = len(b)
  
  if a_len == b_len:
    if a == b:
      return True
    return False
    
  if a_len > b_len:
    if a[a_len - b_len:] == b:
      return True
    return False
  else:
    if b[b_len - a_len:] == a:
      return True
    return False