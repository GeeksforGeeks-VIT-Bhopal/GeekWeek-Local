n=int(input())
s=input()
ans=[]
c=''
for i in range(0,n):
    c = s[i]
    if c>='A' and c<='Z':
        c=chr(ord(c)+32)
    if c not in ans:
        ans.append(c)
if int(len(ans)) == 26:
    print("YES")
else:
    print("NO")
