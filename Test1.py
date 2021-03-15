# Finding the cube of a number

x = input("Enter an integer")
x = int(x)
ans = 0
while ans*ans*ans < abs(x):
    ans = ans + 1
    print(" Current guess =", ans)

print("Last guess=", ans)
print("ans*ans*ans="), ans * ans * ans

if ans*ans*ans == abs(x):
    if x < 0:
        ans = -ans
    print(" Cube root of "+str(x) + " is " + str(ans))
else:
    print(x, " is not a perfect cube ")
