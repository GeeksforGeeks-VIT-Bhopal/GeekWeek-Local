class Solution:
    def countAndSay(self, n: int) -> str:
     s = "1"
     if n == 1:
         return s
     for i in range(2,n+1):
         j = 0
         temp = ""
         curr = ""
         count = 0
         while j<len(s):
            #print(curr,count)
            if curr =="":
               #print(curr)
               curr=s[j]
               count=1
               j+=1
            elif curr == s[j]:
               #print(curr)
               count+=1
               j+=1
            else:
               #print(count,curr)
               temp+= str(count) + curr
               curr=""
               count = 0
               #print(temp)
         temp+=str(count) + curr
         s=temp
     return s
ob1 = Solution()
print(ob1.countAndSay(6))     
