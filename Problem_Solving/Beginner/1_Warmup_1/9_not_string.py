def not_string(str):
  if len(str) >= 3 and str[:3] == 'not':
    return str
  return 'not ' + str


print(not_string('candy'))
print(not_string('x'))
print(not_string('not bad'))
print(not_string('is not'))