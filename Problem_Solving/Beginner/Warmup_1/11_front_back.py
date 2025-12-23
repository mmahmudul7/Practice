def front_back(str):
  if len(str) <= 1:
    return str
  
  n = len(str)
  mid = str[1:-1] # str[1:n-1]
  
  return str[n - 1] + mid + str[0]


print(front_back('code'))
print(front_back('a'))
print(front_back('ab'))