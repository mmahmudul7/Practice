def missing_char(str, n):
  front = str[:n]   # up to but not including n
  back = str[n+1:]  # n+1 through end of string
  return front + back


print(missing_char('kitten', 1))
print(missing_char('kitten', 0))
print(missing_char('kitten', 4))


'''
k i t t e n
0 1 2 3 4 5

we need to remove 1 no index with is i # missing_char('kitten', 1)
str[:1] = 'k' # str[:n]
str[2:] = 'tten' # str[n+1:n]

str[:1] + str[2:] = 'ktten' # i is removed

'''