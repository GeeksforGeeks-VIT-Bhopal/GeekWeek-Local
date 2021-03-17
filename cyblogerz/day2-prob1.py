alphabets="abcdefghijklmnopqrstuvwxyz"
def pancheck(y):
    x=y.lower()
    for i in alphabets:
        if i not in x:
            return False

    return True

n=int(input())
y=input()
check=pancheck(y)
if check:
    print('YES')
else:
    print('NO')
