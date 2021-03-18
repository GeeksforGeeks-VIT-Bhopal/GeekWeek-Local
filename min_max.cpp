// { Driver Code Starts
// Initial Template for C

#include <stdio.h>

struct pair {
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n) ;

int main() {
    long long int t, n, a[100002], i;
    struct pair minmax;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);

        for (i = 0; i < n; i++) scanf("%lld", &a[i]);
        minmax = getMinMax(a, n);
        printf("%lld %lld\n", minmax.min, minmax.max);
    }
    return 0;ge
}// } Driver Code Ends


// User function Template for C

struct pair getMinMax(long long int arr[], long long int n) {
    
    long long int large = arr[0], small = arr[0];
    struct pair ls;
    for(int i=0;i<n;i++)
    {
        if(large < arr[i])
        {
            large = arr[i];
        }
        if(small > arr[i])
        {
            small = arr[i];
        }
    }
    ls.min = small, ls.max = large;
    return ls; 
}