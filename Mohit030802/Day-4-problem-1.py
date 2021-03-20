#python program to check palindrome.





n=int(input("Enter number"))
temp=0
rev=0
while(n>0):
  dig=n%10
  rev=rev*10+dig
  n=n//10
if (temp==rev):
  print("The number is palindrome")
else:
   print("The number is not palindrome")
    
  
