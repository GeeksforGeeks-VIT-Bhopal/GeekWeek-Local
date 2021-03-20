import re
s = input()
if re.search('(AB.*BA|BA.*AB)', s):
    print('YES')
else:
    print('NO')
