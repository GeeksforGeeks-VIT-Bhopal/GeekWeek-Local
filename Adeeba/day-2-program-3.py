largest function
def largest(arr,n):
   #maximum element
   max = arr[0]
   # traverse the whole loop
   for i in range(1, n):
      if arr[i] > max:
         max = arr[i]
   return max
# Driver Code
arr = [23,1,32,67,2,34,12]
n = len(arr)
Ans = largest(arr,n)
print ("Largest element given in array is",Ans)
