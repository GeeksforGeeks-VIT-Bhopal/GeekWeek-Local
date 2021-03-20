#include <iostream>
using namespace std;
void evod(int arr[],int n)
{
    int evod[n],e=0,o=n-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        evod[e++]=arr[i];
        else
        evod[o--]=arr[i];
    }
    arr=evod;
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    cout<<"enter the size of array:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    evod(arr,n);
    display(arr,n);
}