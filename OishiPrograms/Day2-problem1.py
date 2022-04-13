from functools import cmp_to_key
hmap = dict()

def compare(x, y):
    for i in range(min(len(x), len(y))):
        if x[i] == y[i]:
            continue
        else:
            return hmap[x[i]] - hmap[y[i]]

    return len(x) - len(y)


def sortArrStr(n, arrStr, c):
    newOrder = []
    value = ord(c) - ord('a')

    for i in range(26):
        newOrder.append(chr(ord('a') + (value + i) % 26))

    for i in range(26):
        hmap[newOrder[i]] = i
 
