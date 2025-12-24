def squirrel_play(temp, is_summer):
  if 60 <= temp <= 90:
    return True
  elif is_summer:
    return 60 <= temp <= 100
  else:
    return False


#####
def squirrel_play(temp, is_summer):
  if is_summer:
    upper_limit = 100
  else:
    upper_limit = 90
  return 60 <= temp <= upper_limit


####
def squirrel_play(temp, is_summer):
  limit = 100 if is_summer else 90
  return 60 <= temp <= limit