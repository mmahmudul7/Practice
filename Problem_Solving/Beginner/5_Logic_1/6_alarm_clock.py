def alarm_clock(day, vacation):
  if vacation:
    if day == 0 or day == 6:
      return 'off'
    else:
      return '10:00'
  else:
    if day == 0 or day == 6:
      return '10:00'
    else:
      return '7:00'
    

##########
def alarm_clock(day, vacation):
  weekend = (day == 0 or day == 6)
  
  if vacation:
    return 'off' if weekend else '10:00'
  else:
    return '10:00' if weekend else '7:00'