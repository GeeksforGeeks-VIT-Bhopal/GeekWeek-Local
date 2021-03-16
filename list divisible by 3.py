nums = []
i = 1
for i in range(20):
    a = int(input("Enter your number: "))
    nums.append(a)

sum = 0
pro = 1

for j in nums:
    if j % 3 == 0:
        sum = sum + j
    else:
        pro = pro * j

print("Cumulative sum is:", sum)
print("Product is:", pro)
