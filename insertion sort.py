lst = [15, 6, 54, 2, 45, 3]
print ("Original list is :", lst)
for i in range(1, len(lst)) :
   key = lst[i]
   j = i-1
   while j>= 0 and key< lst[j] :
      lst[j+1] = lst[j]
      j = j-1
   else :
      lst[j+1] = key
print ("List after sorting :", lst)
