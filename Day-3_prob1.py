Task:
The provided code stub reads two integers,  and , from STDIN.

Add logic to print two lines. The first line should contain the result of integer division,  // . The second line should contain the result of float division,  / .

No rounding or formatting is necessary.

from __future__ import division

if __name__ == '__main__':
    a = int(raw_input())
    b = int(raw_input())

print a//b
print a/(b*1.0)
