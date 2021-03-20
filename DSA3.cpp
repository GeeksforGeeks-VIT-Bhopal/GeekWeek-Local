#include <bits/stdc++.h>
#define SZ(x) ((int)(x).size())
#define FOR(i,c) for (__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define REP(i,n) for (int i=0; i<(int)(n); i++)
#define REP1(i,a,b) for (int i=(int)(a); i<=(int)(b); i++)
#define ALL(x) begin(x),end(x)
#define MP make_pair
#define PB push_back
using namespace std;
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef long long LL;
#ifdef SHIK
#include "/Users/shik/project/algo/dump.hpp"
#else
#define dump(...)
#endif
// }}}
 
struct ABBADiv1 {
    string canObtain(string initial, string target) {
        set<string> vis;
        queue<string> q;
        auto push=[&]( string s ) {
            if ( vis.count(s) ) return;
            vis.insert(s);
            q.push(s);
        };
        q.push(target);
        while ( !q.empty() ) {
            string s=q.front(); q.pop();
            if ( s.empty() ) continue;
            if ( s.back()=='A' ) {
                string ns=s.substr(0,SZ(s)-1);
                push(ns);
            }
            if ( s[0]=='B' ) {
                string ns=s.substr(1);
                reverse(ALL(ns));
                push(ns);
            }
        }
        return vis.count(initial)?"Possible":"Impossible";
    }
};