import array
  
arr= array.array('i',[1, 2, 3, 1, 2, 5]) 

print ("The new created array is : ",end="")
for i in range (0,6):
    print (arr[i],end=" ")
 
print ("\r")

print ("The index of 1st occurrence of 2 is : ",end="")
print (arr.index(2))
 
arr.reverse()
 
print ("The array after reversing is : ",end="")
for i in range (0,6):
    print (arr[i],end=" ")