#include <iostream> 
using namespace std; 

void sort(int a[], int n) 
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
	int a[] = {6, 2, 5, 10, 9, 7, 1}; 
	int n = sizeof(a)/sizeof(a[0]); 
	sort(a, n); 
	cout<<"Sorted array: \n"; 
	printArray(a, n); 
	return 0; 
} 
