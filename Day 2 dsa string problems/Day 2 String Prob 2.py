# was asked to write the function definition

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

#https://www.codingninjas.com/codestudio/problems/conversion_1172163