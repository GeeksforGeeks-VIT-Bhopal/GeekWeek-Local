#include<iostream>
using namespace std;

void search(int arr[],int f,int l, int x)
{
  int mid=(f+l)/2;
  if(arr[mid]==x)
  {
    cout<<"number found at index:\n"<<mid;
  }
  if(arr[mid]<x)
  {
    search(arr,mid+1,l,x);
  }
  if(arr[mid]>x)
  {
    search(arr,f,mid-1,x);
  }
}

int main()
{
  int a[]={1,2,4,5,8,9,13,15,16,17,18,20};
  int n=sizeof(a)/sizeof(a[0]);
  int m = n/2;
  int x;
  cout<<"Please insert a numbers you want to search:\n";
  cin>>x;
  search(a,0,n-1,x);
}
