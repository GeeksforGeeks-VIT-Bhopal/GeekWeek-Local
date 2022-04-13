def findWord(S, W):
    n = len(S)
    i = 0
    while i<n:
        temp = ""
        while i<n and (S[i]!=' '):
            temp += S[i]
            i+=1

        if temp == W:
            return True

        i+=1

    return False

    pass
