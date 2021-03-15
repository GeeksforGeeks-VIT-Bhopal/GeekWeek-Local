#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, key;
    cin >> n >> key;
    int a[n];
    for (int i=0; i<n; i++) cin>>a[i];
    
    cout<<findElementAtIndex(a, n, key)<<endl;
  }
  return 0;
}

int findElementAtIndex(int a[], int n, int key) 
{
    return a[key];
}
