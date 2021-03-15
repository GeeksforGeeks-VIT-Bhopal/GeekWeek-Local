#include <iostream> 
using namespace std; 

void bubbleSort(int a[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n-1; i++)	 
      {
      for (j = 0; j < n-i-1; j++) 
		if (a[j] > a[j+1]) 
        {
          int temp;
          int *x = &a[j] , *y=&a[j+1]; 
          temp = *x;
	      *x = *y; 
	      *y = temp; 
        }
      }
} 

void printArray(int a[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << a[i] <<endl; 
} 

int main() 
{ 
	int a[] = {64, 34, 25, 12, 22, 11, 90}; 
	int n = sizeof(a)/sizeof(a[0]); 
	bubbleSort(a, n); 
	cout<<"Sorted array: \n"; 
	printArray(a, n); 
	return 0; 
} 
