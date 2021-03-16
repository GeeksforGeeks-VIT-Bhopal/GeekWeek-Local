## Read input as specified in the question.
## Print output  as specified in the question.
''' the link of this question is:
https://codezen.codingninjas.com/practice/467/717/two-substrings
'''
import re
s = input()
if re.search('(AB.*BA|BA.*AB)', s):
    print('YES')
else:
    print('NO')
    