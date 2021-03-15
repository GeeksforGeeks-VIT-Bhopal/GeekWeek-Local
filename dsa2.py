# Find minimum and maximum element in an array
def getMinMax( a, n):
    min = a[0]
    max = a[0]
    for i in a:
        if min > i:
            min = i
        if max < i:
            max = i
    return [min,max]
            
    
    

#{ 
#  Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        
        product = getMinMax(a, n)
        print(product[0], end=" ")
        print(product[1])

        T -= 1


if __name__ == "__main__":
    main()



# } Driver Code Ends
