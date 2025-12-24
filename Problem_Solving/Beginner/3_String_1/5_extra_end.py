def extra_end(str):
  n = len(str)
  if n < 2:
    return str * 3
  return str[n-2:] * 3