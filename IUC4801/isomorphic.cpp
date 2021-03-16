#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
   bool isIsomorphic(string s, string t) {
      vector<int> arr(256, -1);
      vector<bool> visited(256, 0);
      vector<bool> visited1(256, 0);
      for (int i = 0; i < s.length(); i++) {
         if (visited[s[i]] == 1 || visited1[t[i]] == 1) {
            if (arr[s[i]] != t[i] - 'a') {
               return false;
            }
         }
         else {
            visited[s[i]] = 1;
            visited1[t[i]] = 1;
            arr[s[i]] = t[i] - 'a';
         }
      }
      return true;
   }
};
main(){
   Solution ob;
   cout << (ob.isIsomorphic("aab","xxy"));
}
