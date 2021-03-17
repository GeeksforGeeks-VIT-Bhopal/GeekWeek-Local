n,k = map(int,input().split())
r,c = map(int,input().split())

obstacle = []

for _ in range(k):
    obs = [int(x) for x in input().split()]
    obstacle.append(obs)
if n==1:
    print(0)

else:
    hor = []
    vert = []
    for i in range(1,n+1):
        if c<=n:
            temp = [i,c]
            vert.append(temp)
        if r<=n:
            tempo = [r,i]
            hor.append(tempo)

    up_right = []
    for i in range(n+1-r):
        if r+1<=n and c+i<=n:
            temp = [r+i,c+i]
            up_right.append(temp)
            
    bot_right = []
    for i in range(n+1-c):
        if r-i>0 and c+i<=n:
            temp = [r-i,c+i]
            bot_right.append(temp)

    bot_left = []
    for i in range(c):
        if r-i>0 and c-i>0:
            temp = [r-i,c-i]
            bot_left.append(temp)

    up_left = []
    for i in range(n+1-r):
        if r+1<=n and c-i>0:
            temp = [r+i,c-i]
            up_left.append(temp)


    for ob_1 in obstacle:
        if ob_1 in up_left:
            t = up_left.index(ob_1)
            up_left = up_left[:t]
        elif ob_1 in up_right:
            t =up_right.index(ob_1)
            up_right = up_right[:t]
        elif ob_1 in bot_left:
            t =bot_left.index(ob_1)
            bot_left = bot_left[t+1:]
        elif ob_1 in bot_right:
            t = bot_right.index(ob_1)
            bot_right = bot_right[t+1:]
        elif ob_1 in hor:
            t = hor.index(ob_1)
            hor = hor[t+1:]
        elif ob_1 in vert:
            t = vert.index(ob_1)
            vert = vert[t+1:]

    queen = hor + vert + up_left + bot_left + up_right + bot_right
    
    what = list(set(tuple(sorted(sub)) for sub in queen))
    for i in range(n+1):
        temp = [r,c]
        if temp in queen:
            queen.remove(temp)
    print(len(queen))
