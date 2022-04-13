// C++ program to sort Array 
// using sort() in STL 

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 

	// Get the array 
	int arr[] = { 1, 45, 54, 71, 76, 12 }; 

	// Find the size of the array 
	int n = sizeof(arr) / sizeof(arr[0]); 

	// Print the array 
	cout << "Array: "; 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 

	// Sort the array 
	sort(arr, arr + n); 

	// Print the sorted array 
	cout << "Sorted Array: "; 
	for (int i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 

	return 0; 
} 

