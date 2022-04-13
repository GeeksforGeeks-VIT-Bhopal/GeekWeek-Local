// C++ Program to find GCDs of given index ranges in an array
#include <bits/stdc++.h> 
using namespace std; 

int *st; 

int findGcd(int ss, int se, int qs, int qe, int si) 
{ 
	if (ss>qe || se < qs) 
		return 0; 
	if (qs<=ss && qe>=se) 
		return st[si]; 
	int mid = ss+(se-ss)/2; 
	return __gcd(findGcd(ss, mid, qs, qe, si*2+1), 
			findGcd(mid+1, se, qs, qe, si*2+2)); 
} 

int findRangeGcd(int ss, int se, int arr[],int n) 
{ 
	if (ss<0 || se > n-1 || ss>se) 
	{ 
		cout << "Invalid Arguments" << "\n"; 
		return -1; 
	} 
	return findGcd(0, n-1, ss, se, 0); 
} 


int constructST(int arr[], int ss, int se, int si) 
{ 
	if (ss==se) 
	{ 
		st[si] = arr[ss]; 
		return st[si]; 
	} 
	int mid = ss+(se-ss)/2; 
	st[si] = __gcd(constructST(arr, ss, mid, si*2+1), 
				constructST(arr, mid+1, se, si*2+2)); 
	return st[si]; 
} 


int *constructSegmentTree(int arr[], int n) 
{ 
int height = (int)(ceil(log2(n))); 
int size = 2*(int)pow(2, height)-1; 
st = new int[size]; 
constructST(arr, 0, n-1, 0); 
return st; 
} 

int main() 
{ 
	int a[] = {4,16,32,64,81}; 
	int n = sizeof(a)/sizeof(a[0]); 

	constructSegmentTree(a, n); 

	int l = 1; 

	int r = 3; 
	cout << "GCD of the given range is:"; 
	cout << findRangeGcd(l, r, a, n) << "\n"; 

	return 0; 
} 
