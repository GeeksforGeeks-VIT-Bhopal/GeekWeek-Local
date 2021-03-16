def removeConsecutiveDuplicates(s):
    ans = s[0]
    for i in range(1,len(s)):
        if s[i-1]!=s[i]:
            ans += s[i]
    return ans


# Main
s = input().strip()
print(removeConsecutiveDuplicates(s))
