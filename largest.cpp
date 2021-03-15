#include <iostream>
using namespace std;

int largest(int arr[], int n);

int main() 
{
    int arr[1000];
    int i, n;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];
    
    cout<<largest(arr,n)<<endl;
    
    return 0;
}
int largest(int arr[], int n) 
{
    int i;
    int max = arr[0];

    for (i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];

    return max;
}
