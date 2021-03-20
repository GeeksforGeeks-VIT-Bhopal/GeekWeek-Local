//problem Name- Chef and edge flipping
#include <bits/stdc++.h>

using namespace std;

class dsu {
 public:
  vector<int> p;
  int n;

  dsu(int _n) : n(_n) {p.resize(n);iota(p.begin(), p.end(), 0);}

  inline int get(int x) {return (x == p[x] ? x : (p[x] = get(p[x])));}

  inline bool unite(int x, int y) {
    x = get(x);
    y = get(y);
    if (x != y) {
      p[x] = y;
      return true;
    }
    return false;
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, m;
    cin >> n >> m;
    dsu d1(n);
    dsu d2(n);
    vector<pair<int, int>> flip(m);
    vector<bool> mark(n, false);
    int comps = n;
    bool in_first = true;
    int cnt_first = 0;
    for (int i = 0; i < m; i++) {
      int x, y;
      cin >> x >> y;
      --x; --y;
      flip[i] = make_pair(x, y);
      if (in_first) {
        if (d1.get(x) == d1.get(y) || comps > 2) {
          if (d1.unite(x, y)) --comps;          
          ++cnt_first;
        } else in_first = false;        
      }
      if (!in_first)d2.unite(x, y);      
    }
    vector<vector<int>> c(n);
    for (int i = 0; i < n; i++)c[d2.get(i)].push_back(i);
    
    vector<int> A,B,C;
    for (auto& v : c) {
      if (!v.empty()) {
        int val = d1.get(v[0]);
        bool ok = true;
        for (int i = 1; i < (int) v.size(); i++) {
          int cur = d1.get(v[i]);
          if (cur != val) {
            ok = false;
            break;
          }
        }
        if (ok) {
          A = v;
          for (int i = 0; i < n; i++) {
            if (find(v.begin(), v.end(), i) == v.end()) {
              if (d1.get(i) == val)B.push_back(i);
               else C.push_back(i);              
            }
          }
          break;
        }
      }
    }
    assert(!A.empty());
    vector<int> order,pos(n);
    for (int x : A) order.push_back(x);    
    for (int x : B) order.push_back(x);    
    for (int x : C) order.push_back(x);
    for (int i = 0; i < n; i++) pos[order[i]] = i;
    
    vector<vector<int>> g(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (pos[i] < pos[j]) g[i][j] = 1;
         else g[j][i] = 1;        
      }
    }
    for (int i = 0; i < cnt_first; i++) {
      int x = flip[i].first;
      int y = flip[i].second;
      g[x][y] ^= 1;
      g[y][x] ^= 1;
    }
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j++) {
        if (j > i + 1) cout << " ";        
        cout << g[i][j];
      }
      cout << '\n';
    }
  }
  return 0;
}
