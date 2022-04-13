def removeConsecutiveDuplicates(s):
    if len(s) <= 1:
        return s
    s2 = removeConsecutiveDuplicates(s[1:])
    if s[0] == s[1]:
        return s2
    else:
        return s[0]+s2


# Main
s = input().strip()
print(removeConsecutiveDuplicates(s))
