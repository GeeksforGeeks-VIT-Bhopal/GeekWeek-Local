#Check if string is palindrome

def isPalindrome(s):
    return s == s[::-1]

s = "ABCDCBA"
ans = isPalindrome(s)

if ans:
    print("Yes")
else:
    print("No")
