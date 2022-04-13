# k largest elements

t = int(input())
for i in range(t):
    n,k = tuple(map(int, input().split()))
    lst = list(map(int, input().split()))
    lst.sort()
    for i in range(n-k, n):
        print(lst[i],end=" ")
    print(end='\n')

#https://www.codingninjas.com/codestudio/problems/k-largest-element_1062624