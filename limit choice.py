a=int(input("Enter your limit: "))
i=1
even=[]
odd=[]
for i in range(0,a):
    if(i%2==0):
        even.append(i)
    else:
        odd.append(i)
b=str(input("Enter your choice: "))
if (b=="Even"):
    print ("Even Numbers:", even)
elif (b=="Odd"):
    print ("Odd Numbers:", odd)