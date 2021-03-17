#include <iostream>

using namespace std;
int main (){
   int arr[6];
   int n, sum = 0;
   cin>>n;
   
   for(int i = 0; i<n ; i++){
      cin>>arr[i];
   }
   for(int k=0;k<n;k++){
       sum+=arr[k];
   }
   cout<<sum;
   return 0;
}
