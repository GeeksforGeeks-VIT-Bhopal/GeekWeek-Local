def minion_game(string):
    s, k = 0, 0
    l = list(string)
    x = len(l)
    for w in l:
        if w in "aeiouAEIOU":
            k = k + x
        else:
            s = s + x
        x = x - 1

    if s > k:
        print ('Stuart', s)
    elif k > s:
        print ('Kevin', k)
    else:
        print ('Draw')
                
if __name__ == '__main__':
    s = input()
    minion_game(s)