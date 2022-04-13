import math
import os
import random
import re
import sys

# Complete the arrayManipulation function below.
def arrayManipulation(n, queries):
    arr = [0] * (n+1)
    # add the value at first index
    # subtract the value at last index + 1
    for q in queries:
        start, end, amt = q
        arr[start-1] += amt
        arr[end] -= amt

    # max value and running sum
    mv = -1
    running = 0
    for a in arr:
        running += a
        if running > mv:
            mv = running

    return mv

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    queries = []

    for _ in range(m):
        queries.append(list(map(int, input().rstrip().split())))

    result = arrayManipulation(n, queries)

    fptr.write(str(result) + '\n')

    fptr.close()
