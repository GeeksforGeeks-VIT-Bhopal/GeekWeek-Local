#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <cassert>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <bitset>
#include <iostream>

#define pb push_back
#define all(x) (x).begin(), (x).end()

#ifdef KAZAR
  #define eprintf(...) fprintf(stderr,_VA_ARGS_)
#else
  #define eprintf(...) 0
#endif

using namespace std;

template<class T> inline void umax(T &a,T b){if(a < b) a = b;}
template<class T> inline void umin(T &a,T b){if(a > b) a = b;}
template<class T> inline T abs(T a){return a > 0 ? a : -a;}

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;

const int inf = 1e9 + 143;
const ll longinf = 1e18 + 143;

inline int read(){int x;scanf(" %d",&x);return x;}

int main(){

#ifdef KAZAR
  freopen("f.input","r",stdin);
  freopen("f.output","w",stdout);
  freopen("error","w",stderr);
#endif

  int n = read();
  int q = read();
  assert(1 <= n && n <= 1e5);
  assert(1 <= q && q <= 1e5);
  int lastans = 0;
  vector<vi> seq(n);
  for (int i = 0; i < q; i++) {
    int t = read();
    int x = read();
    int y = read();
    int real_x = (x ^ lastans) % n;
    if (t == 1) {
      seq[real_x].pb(y);
    } else {
      assert(seq[real_x].size());
      lastans = seq[real_x][y % seq[real_x].size()];
      printf("%d\n", lastans);
    }
  }

  return 0;
}
