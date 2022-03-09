def mapper(p):
    if p <= 12:
        p = p + 13
    else:
        p = p - 13
    return p


def caesar(x):
    up_key = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    low_key = "abcdefghijklmnopqrstuvwxyz"
    o = ""
    for e in x:
        if e.isupper():
            for r in range(0,26):
                if up_key[r] == e:
                    o = o + up_key[mapper(r)]
        elif e.islower():
            for r in range(0,26):
                if low_key[r] == e:
                    o = o + low_key[mapper(r)]
        else:
            o = o + e

    return o


a = str(input("INPUT: "))
b = a.split()
print("Encrypted password is: ",end="")
for u in b:
    print(caesar(u)," ",end=""