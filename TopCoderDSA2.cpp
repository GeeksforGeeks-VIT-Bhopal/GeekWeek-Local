#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>
#include <cstdint>
#include <unordered_set>
#include <unordered_map>

using namespace std;

typedef long long Int;
typedef vector<int> vint;
typedef pair<int, int> pint;
#define mp make_pair

template <typename T1, typename T2> ostream &operator<<(ostream &os, const pair<T1, T2> &a) { return os << "(" << a.first << ", " << a.second << ")"; };
template <class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template <class T> void chmin(T &t, const T &f) { if (t > f) t = f; }
template <class T> void chmax(T &t, const T &f) { if (t < f) t = f; }



struct AB {
  string createString(int N, int K) {
    string s = string(N / 2, 'B') + string(N - N / 2, 'A');
    int cnt = 0;
    if (cnt == K) {
      return s;
    }
    for (int h = 0; h < N - 1; ++h) {
      for (int i = 0; i < N - 1; ++i) {
        if (s[i] == 'B' && s[i + 1] == 'A') {
          swap(s[i], s[i + 1]);
          if (++cnt == K) {
            return s;
          }
        }
      }
    }
    return "";
  }
};