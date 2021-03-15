#include <stdio.h>

int largest(int arr[], int n);

int main() {
  int arr[1000];
  int i, t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("%d", largest(arr, n));
    printf("\n");
  }
  return 0;
}

//User function Template for C++

// C function to find maximum in arr[] of size n
int largest(int arr[], int n) 
{
    int max=arr[0];
    
    for(int i=1;i<n;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
