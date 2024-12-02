s = input()
l = r = 0
bs = []
i = j = 0

for char in s:
    if(char == 'L'):
        l += 1
    else:
        r += 1
    
    j += 1
    
    if(l == r):
        bs.append(s[i:j])
        i = j
        l = r = 0
        
cnt = len(bs)
print(cnt)

for word in bs:
    print(word)