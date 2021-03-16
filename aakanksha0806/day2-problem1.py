'''https://www.codingninjas.com/codestudio/problems/two-substrings_920397'''
import re
s = input()
if re.search('(AB.*BA|BA.*AB)',s):
    print('YES')
else:
    print('NO')
