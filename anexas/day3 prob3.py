n=int(input(""))
if n<1|n>100:
    print("Enter again")
elif n%2==0:
    if n>=2 & n<=5:
        print("Not Weird")
    elif n>=6 & n<=20:
        print("Weird")
    else:
        print("Not Weird")
else:
       print("Weird") 
