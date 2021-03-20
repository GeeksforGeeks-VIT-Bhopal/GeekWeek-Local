#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int const MAXN = 2600;

int b_poz[MAXN];

int func(int x, int N) {
  if (x >= N) x -= N;
  return x;
}

class ANewHope {
  public:
    int count(vector<int> a, vector<int> b, int D) {
      int ans = 2;

      int n = (int) a.size();

      int is_eq = 1;
      for (int i=0; i<n; i++)
        if (a[i] != b[i]) is_eq = 0;

      if (is_eq)
        return 1;

      for (int i=0; i<n; i++)
        b_poz[b[i]] = i;

      for (int i=0; i<n; i++) {
        int j = b_poz[a[i]];
        int x = i;
        int cnt = 0;
        while (x+D >= n && func(x+D, n) > j) {
          cnt++;
          x = func(x+D, n);
        }
        ans = max(ans, cnt + 2);
      }

      return ans;
    }
};