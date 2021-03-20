#Reversing a string

def reverse(s):
   a=""
   last_index=len(s)-1
   for i in range(last_index,-1,-1):
      a=a+s[i]
   return a
string="Kartikey Khanna"
print(reverse(string))
