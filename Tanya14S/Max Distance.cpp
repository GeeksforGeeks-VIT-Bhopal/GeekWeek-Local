// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int countZeroes(int arr[], int n) {
    // code here
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        count++;
        else continue;
    }
    return count;
}

// { Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);;
        }
        
        int ans = countZeroes(arr, n);
        printf("%d\n", ans);
    }
    return 0;
}
  // } Driver Code Ends
