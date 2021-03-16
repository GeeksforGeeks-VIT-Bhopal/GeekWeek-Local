import math
import os
import random
import re
import sys
def matchingStrings(s, q):
  l=[]
  for x in q:
    l.append(s.count(x))
  return(l)
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    strings_count = int(raw_input())
    s= []
    for _ in xrange(strings_count):
        strings_item = raw_input()
        s.append(strings_item)
    queries_count = int(raw_input())
    q = []
    for _ in xrange(queries_count):
        queries_item = raw_input()
        q.append(queries_item)
    res = matchingStrings(s, q)
    fptr.write('\n'.join(map(str, res)))
    fptr.write('\n')
    fptr.close()


