t = int(input())
for i in range(t):
    n,k = tuple(map(int, input().split()))
    lst = list(map(int, input().split()))
    lst.sort()
    for i in range(n-k, n):
        print(lst[i],end=" ")
    print(end='\n')