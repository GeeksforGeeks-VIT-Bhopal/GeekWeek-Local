# ques: https://codezen.codingninjas.com/practice/467/717/two-substrings
import re
s = input()
if re.search('(AB.*BA|BA.*AB)', s):
    print('YES')
else:
    print('NO')
