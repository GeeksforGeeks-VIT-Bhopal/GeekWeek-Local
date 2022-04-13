You are given two strings STR1 and STR2. You need to check whether STR2 can be formed from the characters of STR1. Both the strings can contain any characters.
Ans-

def canMakeStr2(s1, s2): 

	count = {s1[i] : 0 for i in range(len(s1))} 
	
	for i in range(len(s1)): 
		count[s1[i]] += 1
	
	for i in range(len(s2)): 
		if count[s2[i]] == 0: 
			return False
		count[s2[i]] -= 1
	return True

s1 = input()
s2 = input()

if canMakeStr2(s1, s2): 
	print("Yes") 
else: 
	print("No") 
