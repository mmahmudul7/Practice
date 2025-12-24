def sleep_in(weekday, vacation):
  if weekday is False or vacation is True:
    return True
  return False


print(sleep_in(False, False))
print(sleep_in(True, False))
print(sleep_in(False, True))