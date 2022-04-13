#include<bits/stdc++.h>
using namespace std;
class mark{
public:
void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  
  

int partition (int arr[], int low, int high)  
{  
    int pivot = arr[high];  
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++)  
    {  
        
        if (arr[j] < pivot)  
        {  
            i++; 
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
  

void quickSort(int arr[], int low, int high)  
{  
    if (low < high)  
    {  
        
        int pi = partition(arr, low, high);  
  
       
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  

void result(int arr[],int n, int k)
{   
    int sum=0;
    int count=0;

        for(int i=0;i<n;i++)
        { if(arr[i]>k-sum)
        {
            break;
        }
        if(sum<k)
        count++;
            sum+=arr[i];
        }
            cout<<count;
    }

};
int main()
{
    int n,i,k;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mark m;
    m.quickSort(arr,0,n-1);
    m.result(arr,n,k);
    return 0;
}
