def round10(num):
  remainder = num % 10

  if 0 <= remainder <=4:
    return num - remainder
  elif 5 <= remainder <=9:
    return num + (10 - remainder)

def round_sum(a, b, c):
  return round10(a) + round10(b) + round10(c)


###########
def round_sum(a, b, c):
    return round10(a) + round10(b) + round10(c)

def round10(num):
    remainder = num % 10
    
    if remainder >= 5:
        return num + (10 - remainder)
    else:
        return num - remainder


'''
40%10 = 0

round_sum(12, 13, 14)
12 % 10 = 2
12-2=10
13 % 10 = 3
13-3=10
14 % 10 = 4
14-4=10

round_sum(6, 4, 4)
6 % 10 = 6
6+(10-6)=10
4 % 10 = 4
4-4=0

round_sum(16, 17, 18)
16 % 10 = 6
16+(10-6)=20
17 % 10 = 7
17+(10-7)=20
18 % 10 = 8
18+(10-8)=20
'''