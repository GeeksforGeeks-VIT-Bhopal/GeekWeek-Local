t = int(input())
l = []
for _ in range(t):
    p = [input()]
    l.append(p)
for i in l:
    i = i[0].split()
    ss = ' '
    print(ss.join(i[::-1]))
