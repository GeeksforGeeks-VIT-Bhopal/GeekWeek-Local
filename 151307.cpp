#include <iostream>
using namespace std;
// min max in array
void bubblesort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

}
void display(int arr[],int size)
{
    cout<<"largest element :"<<arr[size-1]<<endl;
    cout<<"smallest element:"<<arr[0]<<endl;
}
int main()
{
    cout<<"enter the size of array:";
    int n;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    bubblesort(a,n);
    display(a,n);
}