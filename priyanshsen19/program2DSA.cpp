#include <bits/stdc++.h> 
using namespace std; 

int calculateDistance(int arr[], int N) 
{ 
	
	vector<pair<int, int> > v; 
  for (int i = 0; i < N; i++) 
		v.push_back({ arr[i], i }); 

	sort(v.begin(), v.end()); 
	int ans = 0; 
	int last = 0; 
	for (auto j : v) { 
		ans += abs(j.second - last); 
		last = j.second; 
	} 
	return ans; 
} 
int main() 
{ 
	int arr[] = { 3,4,7,2,5 }; 
	int N = sizeof(arr) / sizeof(arr[0]); 
	cout << calculateDistance(arr, N); 
}
