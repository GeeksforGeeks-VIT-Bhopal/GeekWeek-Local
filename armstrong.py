a = int(input("Enter your number: "))
b = a
sum = 0

while (a>0):
    c = a%10
    T = c*c*c
    sum = sum + T
    a = a//10

if (sum == b):
    print (b, "is an armstrong number")
    if (b%2!=0):
        print (b, "is also an odd number")
    else:
        print (b, "is an armstrong number but not an odd number")
else:
    print (b, "is not an armstrong number")