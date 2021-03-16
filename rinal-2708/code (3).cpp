// C++ program to write  Array range queries for searching an element
#include <bits/stdc++.h> 
using namespace std; 

struct Query 
{ 
	int L, R, X; 
}; 

const int maxn = 100; 

int root[maxn]; 

int find(int x) 
{ 
	return x == root[x] ? x : root[x] = 
				find(root[x]); 
} 

int uni(int x, int y) 
{ 
	int p = find(x), q = find(y); 
	if (p != q) { 
		root[p] = root[q]; 
	} 
} 

void initialize(int a[], int n, Query q[], int m) 
{ 

	for (int i = 0; i < n; i++) 
		root[i] = i; 

	for (int i = 1; i < n; i++) 
		if (a[i] == a[i - 1]) 
			uni(i, i - 1); 
} 

int main() 
{ 
	int a[] = { 1, 1, 5, 4, 5 }; 
	int n = sizeof(a) / sizeof(a[0]); 
	Query q[] = { { 0, 2, 2 }, { 1, 4, 1 }, 
				{ 2, 4, 5 } }; 
	int m = sizeof(q) / sizeof(q[0]); 
	initialize(a, n, q, m); 

	for (int i = 0; i < m; i++) 
	{ 
		int flag = 0; 
		int l = q[i].L, r = q[i].R, x = q[i].X; 
		int p = r; 

		while (p >= l) 
		{ 

			if (a[p] == x) 
			{ 
				flag = 1; 
				break; 
			} 
			p = find(p) - 1; 
		} 

		if (flag != 0) 
			cout << x << " exists between [" << l 
				<< ", " << r << "] " << endl; 
		else
			cout << x << " does not exist between ["
				<< l << ", " << r << "] " << endl; 
	} 
} 
