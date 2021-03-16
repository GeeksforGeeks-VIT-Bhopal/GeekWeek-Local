#include<iostream>
using namespace std;
int main()
{
    int arr[5], i;
    cout<<"Enter 5 Array Elements: ";
    for(i=0; i<5; i++)
        cin>>arr[i];
    cout<<"\nThe Original Array is:\n";
    for(i=0; i<5; i++)
        cout<<arr[i]<<" ";
    cout<<"\n\nThe Reverse of Given Array is:\n";
    for(i=(5-1); i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;