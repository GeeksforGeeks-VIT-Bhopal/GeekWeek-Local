#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
 
class ANDEquation {
public:
  int restoreY(vector <int> A) {
    
    int a;
    
    for ( int i = 0; i < A.size(); i++ ) {
      a = ~0;
      for ( int j = 0; j < A.size(); j++ ) {
        if ( i != j ) a &= A[j];
      }
      if ( A[i] == a ) return A[i];
    }
    
    return -1;
          
          
  }
};