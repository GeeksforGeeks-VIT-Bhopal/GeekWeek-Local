#two substrings

s = input()
l = len(s)
if "AB" in s and "BA" in s:
    ab = s.find("AB",0,l)
    ba = s.find("BA",0,l)    
    if abs(ab-ba)==1:
        if (abs(s.find("AB",ab+1,l) - s.find("BA",ba+1,l)) == 1) :
            print("YES",end="\n")
            exit(0)
        else:
            print("NO",end="\n")
            exit(0)
      
        print("NO",end="\n")
        
    else: 
        
        print("YES",end="\n")
else:
    print("NO",end="\n")

#https://www.codingninjas.com/codestudio/problems/two-substrings_920397