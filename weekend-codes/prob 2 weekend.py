import math
import os
import random
import re
import sys

def hurdleRace(k, height):
    pcount = 0
    for i in height:
        if k >= i:
            pcount += 0
        else:
            pcount += i-k
            k += i-k
    else:
        return pcount
            
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    height = list(map(int, input().rstrip().split()))

    result = hurdleRace(k, height)

    fptr.write(str(result) + '\n')

    fptr.close()
