from sys import stdin

def lcs(X, Y, m, n):
    ans = 0
    if m==0 or n==0:
        ans = 0
    elif X[m-1]==Y[n-1]:
        ans = 1 + lcs(X, Y, m-1, n-1)
    else:
        ans = max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n))
    return ans
X = input()
Y = input()
print(lcs(x,y,len(x),len(y)))
