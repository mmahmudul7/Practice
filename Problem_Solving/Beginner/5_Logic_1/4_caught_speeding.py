def caught_speeding(speed, is_birthday):
  if speed <= 65 and is_birthday:
    return 0
  elif speed <= 60 and not is_birthday:
    return 0
  elif 66 <= speed <= 85 and is_birthday:
    return 1
  elif 61 <= speed <= 80 and not is_birthday:
    return 1
  else:
    return 2
  


  ###
def caught_speeding(speed, is_birthday):
  bonus = 5 if is_birthday else 0
  
  if speed <= 60 + bonus:
    return 0
  elif speed <= 80 + bonus:
    return 1
  else:
    return 2
