'''
this is the problem link: https://practice.geeksforgeeks.org/problems/maximum-and-minimum-of-array-elements/0
'''
t=int(input())
for i in range (t):
    n=int(input())
    arr=list(map(int, input().split()))
    print(max(arr), min(arr))
