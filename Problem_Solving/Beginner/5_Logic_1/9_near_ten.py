def near_ten(num):
  remainder = num % 10
  return remainder <= 2 or remainder >= 8
  
  
  '''
  22 % 10 = 2
  18, 19, 20, 21, 22 are True
  
  num - 2 = 18
  num + 2 = 22
  
  18 - 10 = 8
  22 - (10 * 2) = 2
  
  remainder <= 2 or remainder >= 8
  
  '''