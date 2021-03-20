import math
import os
import random
import re
import sys

def pickingNumbers(a):
    max = 0
    l = len(a)
    a.sort()
    for i in range(l):
        count = 0
        lst = []
        for j in range(l):
            if abs(a[i]-a[j])<=1:
                count += 1
                lst.append(a[j])
                if lst:
                    if abs(lst[0] - lst[-1]) > 1:
                        count -= 1
                        break
                
        if count > max:
            max = count
            
    return max
                

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = pickingNumbers(a)

    fptr.write(str(result) + '\n')

    fptr.close()
