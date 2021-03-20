from itertools import permutations
for _ in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    ans = ''
    arr.sort()
    count = 0
    for i in range(1,n+1):
        value = arr[i-1]
        if value>i:
            ans = 'Second'
            break
        else:
            count += i-value
    if ans=='':
        if count%2==0:
            ans = 'Second'
        else:
            ans = 'First'
    print(ans)