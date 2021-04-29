s=input()
x=s.find('AB')
y=s.find('BA',x+2)
i=s.find('BA')
j=s.find('AB',i+2)
if x>-1 and y>-1:
    print('YES')
elif i>-1 and j>-1:
    print('YES')
else:
    print('NO')
