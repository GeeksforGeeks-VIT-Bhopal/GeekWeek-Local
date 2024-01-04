//Binary data structure only works on sorted array
#include<iostream>
using namespace std;
int Binarysearch(int a[],int left, int right,int x)
{
	while(left<=right)
	{
		int mid=left+((right-left)/2);
		if(a[mid]==x)
		//mid value same with the input
		{
			return mid;
		}
		else if(a[mid]<x)
		//mid value less than input, so right part will take into consideration
		{
			left=mid+1;
		}
		else
		//mid value greater than input, so left part will take into consideration as it is an sorted array
		{
			right=mid-1;
		}
	}
	return -1;
}

 main()
{
	int num;
	int arr[10];
	int output;
	cout<<"\nEnter the elements of the array(<=10) in ascending order: "<<endl;
	for(int i=0;i<10;i++)
	{
	cin>>arr[i];
    }
    cout<<"\nEnter a number that you want to search in the array: "<<endl;
    cin>>num;
	
    output=Binarysearch(arr,0,9,num);
    if(output==-1)
    {
    	cout<<"\nNo match found."<<endl;
	}
	else
	{
		cout<<"\nMatch is found at the index position: "<<output<<endl;
	}
}
