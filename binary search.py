items = []
n = int(input("Enter the number of elements :"))
for a in range(1, n+1) :
   num = int(input("Enter the element :"))
   items.append(num)
print("list of items is", items)
x = int(input("enter item to search:"))
i = flag = 0
while i < len(items):
   if items[i] == x:
      flag = 1
      break
   i = i + 1
if flag == 1:
   print("item found at position:", i + 1)
else:
   print("item not found")
