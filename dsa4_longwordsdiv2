#include <fstream> // for greed plugin
#include <iostream>
#include <algorithm> // max,min
#include <vector>
#include <string>
#include <sstream>
#include <set>
#include <map>
#include <iostream>
#include <utility>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <limits.h>
#include <cstring>
#include <tuple>
#include <cassert>
#include <numeric>
using namespace std;

// type alias
typedef long long LL;

typedef vector < int > VI;
typedef unordered_map < int, int > MAPII;
typedef unordered_set < int > SETI;
typedef pair< int , int > II;
typedef tuple< int, int, int > III;

// repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  for(int i=0;i<(n);++i)
#define FORR(x,arr) for(auto& x:arr)
#define SZ(a) int((a).size())

// DP
#define MINUS(dp) memset(dp, -1, sizeof(dp))
#define ZERO(dp) memset(dp, 0, sizeof(dp))

// debug cout
#define dump(x)  cout << #x << " = " << (x) << endl;
#define dump2(x,y)  cout << #x << " = " << (x) << ", " << #y << " = " << (y) << endl;
#define dump3(x,y,z)  cout << #x << " = " << (x) << ", " << #y << " = " << (y) << ", " << #z << " = " << (z) << endl;
#define dump4(x,y,z,a)  cout << #x << " = " << (x) << ", " << #y << " = " << (y) << ", " << #z << " = " << (z) << ", " << #a << " = " << (a) << endl;
#define dumpAR(ar) FORR(x,(ar)) { cout << x << ','; } cout << endl;

/*
 
 10/7/2017
 
 13:54-14:10 system test passed (391.19 pt)
 
 editorial:
  - https://apps.topcoder.com/wiki/display/tc/SRM+618
   - linear subsequence check
  - http://torus711.hatenablog.com/entry/20140428/1398697490
   - O(N^4) subsequence check
  - http://kmjp.hatenablog.jp/entry/2014/04/27/1100
   - O(N^4) subsequence check
 
 16:43-16:51 add solution by linear subsequence check
 
 summary:
  - brute-force xyxy and check by linear subsequence is neat
  - my solution is not so popular
 
 submit solutions:
  - linear subseq
    - https://community.topcoder.com/stat?c=problem_solution&rm=321891&rd=15851&pm=13147&cr=23139161
  - O(N^3) left right char set check
   - https://community.topcoder.com/stat?c=problem_solution&rm=321897&rd=15851&pm=13147&cr=22849803
  - O(N^4) check
   - https://community.topcoder.com/stat?c=problem_solution&rm=321863&rd=15851&pm=13147&cr=22916803
   - https://community.topcoder.com/stat?c=problem_solution&rm=321859&rd=15851&pm=13147&cr=22761932
 
 */

class LongWordsDiv2 {
public:
  string yes="Likes",no="Dislikes";
  bool subseq(string s, string t) {
    int j=0;
    REP(i,SZ(s)) {
      if(j<SZ(t)&&s[i]==t[j]) ++j;
    }
    return j==SZ(t);
  }
  
  string find(string W) {
    int N=SZ(W);
    REP(i,26)REP(j,26) {
      char x='A'+i,y='A'+j;
      string t;
      t+=x; t+=y; t+=x; t+=y;
      if(subseq(W,t)) return no;
    }
    
    REP(i,N-1) if(W[i]==W[i+1]) return no;
    
    return yes;
  }
};

// O(N^2) time, O(N) space
class LongWordsDiv2_org {
  public:
  string yes="Likes",no="Dislikes";
  string find(string W) {
    int N=SZ(W);
    FORR(c,W) if(c<'A'||c>'Z') return no;
    REP(i,N-1) if(W[i]==W[i+1]) return no;
    
    vector<unordered_set<char>> R(N);
    unordered_set<char> cur;
    for(int i=N-1; i>=0; --i) {
      R[i]=cur;
      cur.emplace(W[i]);
    }
    REP(i,N) {
      unordered_set<char> L;
      FOR(j,i+1,N) {
        if(W[j]==W[i]) {
          REP(k,26) if(L.count('A'+k)&&R[j].count('A'+k)) return no;
        }
        L.emplace(W[j]);
      }
    }
    
    return yes;
  }
};

// CUT begin
ifstream data("LongWordsDiv2.sample");

string next_line() {
    string s;
    getline(data, s);
    return s;
}

template <typename T> void from_stream(T &t) {
    stringstream ss(next_line());
    ss >> t;
}

void from_stream(string &s) {
    s = next_line();
}

template <typename T>
string to_string(T t) {
    stringstream s;
    s << t;
    return s.str();
}

string to_string(string t) {
    return "\"" + t + "\"";
}

bool do_test(string word, string __expected) {
    time_t startClock = clock();
    LongWordsDiv2 *instance = new LongWordsDiv2();
    string __result = instance->find(word);
    double elapsed = (double)(clock() - startClock) / CLOCKS_PER_SEC;
    delete instance;

    if (__result == __expected) {
        cout << "PASSED!" << " (" << elapsed << " seconds)" << endl;
        return true;
    }
    else {
        cout << "FAILED!" << " (" << elapsed << " seconds)" << endl;
        cout << "           Expected: " << to_string(__expected) << endl;
        cout << "           Received: " << to_string(__result) << endl;
        return false;
    }
}

int run_test(bool mainProcess, const set<int> &case_set, const string command) {
    int cases = 0, passed = 0;
    while (true) {
        if (next_line().find("--") != 0)
            break;
        string word;
        from_stream(word);
        next_line();
        string __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(word, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1507409648;
        double PT = T / 60.0, TT = 75.0;
        cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
        cout << "Score  : " << 500 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    set<int> cases;
    bool mainProcess = true;
    for (int i = 1; i < argc; ++i) {
        if ( string(argv[i]) == "-") {
            mainProcess = false;
        } else {
            cases.insert(atoi(argv[i]));
        }
    }
    if (mainProcess) {
        cout << "LongWordsDiv2 (500 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
