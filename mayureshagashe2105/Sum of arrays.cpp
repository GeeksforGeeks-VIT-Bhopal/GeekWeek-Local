#include <iostream>
using namespace std;

int main() 
{
	int arr[1000], lim, sum=0;
	cout << "Enter number of elements you want to insert\n";
	cin >> lim;
	for(int i = 0; i < lim; i++)
	{
	    cout << "Enter array element\n";
	    cin >> arr[i];
	}
	for (int i = 0; i < lim; i++)
	{
	    sum += arr[i];
	}
	cout << "Sum of the array is: " << sum << endl;
	
	return 0;
}