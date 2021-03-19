def conversion(N, M):
    if M > N:
        N,M = M,N
    N = bin(N)[2:]
    M = bin(M)[2:]
    for i in range(len(N)-len(M)):
        M = '0'+ M
    count = 0
    for i in range(len(N)):
        if N[i] != M[i]:
            count += 1       
    return count


t = int(input())
for i in range(t):
    N,M = tuple(map(int, input().split()))
    ans = conversion(N,M)
    print(ans,end="\n")