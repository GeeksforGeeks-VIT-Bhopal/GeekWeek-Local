#include <bits/stdc++.h>
using namespace std;
void segregate0and1(int arr[], int n) {
        // code here
        int c0=0,c1=0;
        for(int i=0;i<n;i++){
        if(arr[i]==1)
          c1++;
        if(arr[i]==0)
          c0++;
        }
        int i=0;
        while(i<n){
            while(c0--){
                arr[i]=0;
                i++;
            }
            while(c1--){
                arr[i]=1;
                i++;
            }
        }
    }
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    segregate0and1(arr,n);
  }
}
