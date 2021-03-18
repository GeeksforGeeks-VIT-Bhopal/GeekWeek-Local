a=int(input("Enter length of side 1 "))
b=int(input("Enter length of side 2 "))
c=int(input("Enter length of side 3 "))
s=(a+b+c)/2
import math
ar=math.sqrt(s*(s-a)*(s-b)*(s-c))
print("Area of the triangle is", ar)