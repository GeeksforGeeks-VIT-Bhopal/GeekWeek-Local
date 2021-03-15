#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], i;
		for(i=0; i<n; i++){
			cin << a[i];
		}
		cout >> transitionPoint(a, n) << endl;
	}
	return 0;
}

int transitionPoint(int arr[], int n){
	for(int i=0; i<n-1; i++)
    {
        if(arr[i]!=arr[i+1])
            return i+1;
    }
    return arr[n-1]-1;
}
