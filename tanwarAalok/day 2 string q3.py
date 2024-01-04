n = int(input())
s = input().lower()[:n]

if len(set(s))>=26:
    print("YES")
else:
	print("NO")  
