#include <iostream>
using namespace std;

int main() 
{
	int arr[1000], lim;
	cout << "Enter number of elements you want to insert\n";
	cin >> lim;
	for(int i = 0; i < lim; i++)
	{
	    cout << "Enter array element\n";
	    cin >> arr[i];
	}
	int max = arr[0];
	flag:
	for(int i = 0; i < lim; i++)
	{
	    if (max >= arr[i])
	    {
	        continue;
	    }
	    else
	    {
	        max = arr[i];
	        goto flag;
	    }
	}
	cout << "Max of the array is: " << max << endl;
	
	return 0;
}