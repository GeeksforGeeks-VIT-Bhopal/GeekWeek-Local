#include<iostream>
using namespace std;
void rotate()
{
	int n,d,i;
	cin>> n>>d;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int temp=arr[d];
	for(i=0;i<d;i++)
	{
		arr[i]=arr[i+d];
		arr[i]=temp;
	}
	for(i=0;i<n;i++)
	{
		swap(arr[])
	}
}
int main()
{
	rotate();
}
