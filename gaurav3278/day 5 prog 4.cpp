#include <bits/stdc++.h>
using namespace std;
#define push push_back
void print_vector(vector<auto> v){
   cout << "[";
   for(int i = 0; i<v.size(); i++){
      cout << v[i] << ", ";
   }
   cout << "]"<<endl;
}
class Solution {
public:
   vector<int> transformArray(vector<int>& arr) {
      if(arr.size()<=2)return arr;
      bool flag = true;
      while(flag){
         flag = false;
         vector <int> temp;
         temp.push_back(arr[0]);
         for(int i = 1; i < arr.size()-1; i++){
            if(arr[i]< arr[i-1] && arr[i]<arr[i+1]){
               temp.push(arr[i]+1);
               flag = true;
            }
            else if(arr[i]> arr[i-1] && arr[i]>arr[i+1]){
               flag = true;
               temp.push(arr[i]-1);
            }
            else temp.push(arr[i]);
         }
         temp.push_back(arr[arr.size()-1]);
         arr = temp;
      }
      return arr;
   }
};
main(){
   Solution ob;
   vector<int> v = {1,6,3,4,3,5};
   print_vector(ob.transformArray(v));
}
