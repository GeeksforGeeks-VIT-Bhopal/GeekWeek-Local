# Geek Week: Local
# author: Devarakonda Anuhya
# Day- 2
def char(S3):
    n = len(S3)
    for i in range(1, n):
        if S3[i] != S3[0]:
            return False
    return True

S1 = str(input("Enter a few alphabets: "))
S2 = str(input("Enter a few alphabets: "))
S3 = str(input("Enter a few alphabets: "))

if char(S3) == char(S1) and char(S2):
    print("YES")
else:
    print("NO")
# PAPAINOEL
# JOULUPUKKI
# JOULNAPAOILELUPUKKI
