You are given a string S. Your task is to determine if the given string S contains two non-overlapping substrings "AB" and "BA" (the substrings can go in any order). Print "YES" or "NO".
Ans-

s = input()
x=s.find("AB")
y=s.find("BA",x+2)
i=s.find("BA")
j=s.find("AB",i+2)
if x>-1 and y>-1:
    print("yes")
elif i>-1 and j>-1:
    print("yes")
else:print("no")
