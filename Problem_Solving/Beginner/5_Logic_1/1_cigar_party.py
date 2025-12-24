def cigar_party(cigars, is_weekend):
  if 40 <= cigars <= 60 and not is_weekend:
    return True
  elif cigars >= 40 and is_weekend:
    return True
  else:
    return False
  

###########
def cigar_party(cigars, is_weekend):
    if is_weekend:
        return cigars >= 40
    else:
        return 40 <= cigars <= 60
