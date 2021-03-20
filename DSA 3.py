s = input()
a = 1
t = tuple()
l = []
for i in range(len(s)):    
    if i == len(s)-1:
        l.append((a,int(s[i])))
        break
    if s[i] == s[i+1]:
        a += 1
    else:
        l.append((a,int(s[i])))
        a = 1
for j in l:
    print(j, end = " ")