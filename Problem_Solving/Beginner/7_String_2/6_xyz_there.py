def xyz_there(str):
  str = str.replace('.xyz', '')
  count = 0
  
  for i in range(len(str) - 2):
    if str[i:i+3] == 'xyz':
      count += 1
      
  return count >= 1


##
def xyz_there(str):
    for i in range(len(str) - 2):
        if str[i:i+3] == 'xyz':
            if i == 0 or str[i-1] != '.':
                return True
    return False