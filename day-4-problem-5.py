#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   static bool cmp(vector <int> a, vector <int> b){
      return abs(a[0] - a[1]) > abs(b[0] - b[1]);
   }
   int twoCitySchedCost(vector<vector<int>>& costs) {
      int n = costs.size();
      int a = n/2;
      int b = n/2;
      sort(costs.begin(), costs.end(), cmp);
      int ans = 0;
      for(int i = 0; i < n; i++){
         if(b == 0 || (costs[i][0] <= costs[i][1] && a > 0)){
            a--;
           
            ans += costs[i][0];
         } else {

            b--;
            ans += costs[i][1];
         }
      }
      return ans;
   }
};
int main(){
   Solution ob;
   vector<vector<int>> c = {{10,20},{30,200},{400,50},{30,20}};
   cout << ob.twoCitySchedCost(c);
}
