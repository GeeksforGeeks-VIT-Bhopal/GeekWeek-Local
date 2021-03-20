#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
     float f1=0,f2=0,f3=0;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]>0)
      f1++;
  else if(arr[i]<0)
      f2++;
      else
      f3++;
    }
    cout<<f1/n<<endl<<f2/n<<endl<<f3/n;
}
