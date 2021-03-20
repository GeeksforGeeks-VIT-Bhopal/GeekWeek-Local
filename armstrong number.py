n = int(input("enter any number"))
temp = n
count = 0
add = 0
while temp > 0:
    temp = temp//10
    count = count + 1
temp = n
while temp > 0:
    digit = temp % 10
    add = add + (digit**count)
    temp = (temp//10)
if add == n:
    print("its an armstrong number")
else:
    print("not an armstrong number")
