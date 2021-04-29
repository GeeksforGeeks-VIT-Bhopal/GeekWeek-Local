def getSum( arr, n):
    sum=0
    for i in range (len(arr)):
        sum+=arr[i]
        i+=1
    return sum

arr=[1,2,3,4]
n=len(arr)
print(getSum(arr,n))
