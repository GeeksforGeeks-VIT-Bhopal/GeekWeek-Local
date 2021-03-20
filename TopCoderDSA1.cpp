#include <bits/stdc++.h> 

using namespace std; 

class A0Paper {
  public: 
  string canBuild(vector <int> A) {
    int n = (int) A.size(); 

    vector <int> a = A; 

    for (int i = n - 1; i > 0; i--) {
      a[i - 1] += a[i] / 2; 
    }

    return (a[0] > 0 ? "Possible" : "Impossible"); 
  }
}