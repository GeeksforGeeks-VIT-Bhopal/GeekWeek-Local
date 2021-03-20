import math
import os
import random
import re
import sys

utree = []
h = 0
for i in range(61):
    if i%2 == 0 or i==0:
        h += 1
        utree.append(h)
    else:
        h *= 2
        utree.append(h)  
    

def utopianTree(n):
    return utree[n]
        
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        result = utopianTree(n)

        fptr.write(str(result) + '\n')

    fptr.close()
