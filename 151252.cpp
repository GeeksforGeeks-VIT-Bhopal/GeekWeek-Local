#include <iostream>
using namespace std;
// selection sort
void selectionsort(int arr[])
{
    int size=9;
    for(int i=0;i<size-1;i++)
    {
        int k=i;
        for(int j=k+1;j<size;j++)
        {
            if(arr[j]<arr[k])
            k=j;
        }
        int temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
    }
}
void display(int arr[])
{
    int size=9;
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int a[]={1,3,5,7,9,-7,-5,-3,-1};
    selectionsort(a);
    display(a);
}