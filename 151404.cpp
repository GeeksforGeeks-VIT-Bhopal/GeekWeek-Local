#include <iostream>
using namespace std;
// sum of array elements
int sum(int a[],int n)
{
    int sum;
    for(int i=0;i<n;i++)
    sum+=a[i];
    return sum;
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
    cout<<"sum = "<<sum(a,n)<<endl;
}
