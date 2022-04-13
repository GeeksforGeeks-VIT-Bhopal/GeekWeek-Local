MAX_CHAR = 26



def twoStrings(s1, s2):

    v = [0] * (MAX_CHAR)


    for i in range(len(s1)):
        v[ord(s1[i]) - ord('a')] = True


    for i in range(len(s2)):
        if (v[ord(s2[i]) - ord('a')]):
            return True

    return False