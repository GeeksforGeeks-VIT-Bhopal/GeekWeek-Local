import math
import os
import random
import re
import sys

def designerPdfViewer(h, word):
    l = len(word)
    lst = []
    for i in word:
        lst.append(h[ord(i)-97])
    
    return l*max(lst)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    h = list(map(int, input().rstrip().split()))

    word = input()

    result = designerPdfViewer(h, word)

    fptr.write(str(result) + '\n')

    fptr.close()
