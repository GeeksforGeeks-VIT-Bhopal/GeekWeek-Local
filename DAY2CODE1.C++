#include <bits/stdc++.h>
using namespace std;
void strReverse(string& str){
   int n = str.length();
   // Swap character starting from two
   cout<<"interative reverse (Tomhanks)::";
   for (int i = 0; i < n / 2; i++)
      swap(str[i], str[n - i - 1]);
}
int main(){
   string str = "Tomhanks";
   strReverse(str);
   cout << str;
   return 0;
}
