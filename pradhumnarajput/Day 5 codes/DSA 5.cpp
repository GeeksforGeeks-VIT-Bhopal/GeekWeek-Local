#include <bits/stdc++.h>
using namespace std;
// type alias
typedef long long LL;
typedef pair<int,int> II;
typedef tuple<int,int,int> III;
typedef vector<int> VI;
typedef vector<string> VS;
typedef unordered_map<int,int> MAPII;
typedef unordered_set<int> SETI;
template<class T> using VV=vector<vector<T>>;
// minmax
template<class T> inline T SMIN(T& a, const T b) { return a=(a>b)?b:a; }
template<class T> inline T SMAX(T& a, const T b) { return a=(a<b)?b:a; }
// repetition
#define FORE(i,a,b) for(int i=(a);i<=(b);++i)
#define REPE(i,n)  for(int i=0;i<=(n);++i)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  for(int i=0;i<(n);++i)
#define FORR(x,arr) for(auto& x:arr)
#define SZ(a) int((a).size())
// collection
#define ALL(c) (c).begin(),(c).end()
// DP
#define MINUS(dp) memset(dp, -1, sizeof(dp))
#define ZERO(dp) memset(dp, 0, sizeof(dp))
// debug cerr
template<class Iter> void __kumaerrc(Iter begin, Iter end) { for(; begin!=end; ++begin) { cerr<<*begin<<','; } cerr<<endl; }
void __kumaerr(istream_iterator<string> it) { (void)it; cerr<<endl; }
template<typename T, typename... Args> void __kumaerr(istream_iterator<string> it, T a, Args... args) {  cerr<<*it<<"="<<a<<", ",__kumaerr(++it, args...); }
template<typename S, typename T> std::ostream& operator<<(std::ostream& _os, const std::pair<S,T>& _p) { return _os<<"{"<<_p.first<<','<<_p.second<<"}"; }
#define __KUMATRACE__ true
#ifdef __KUMATRACE__
#define dump(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); __kumaerr(_it, args); }
#define dumpc(ar) { cerr<<#ar<<": "; FORR(x,(ar)) { cerr << x << ','; } cerr << endl; }
#define dumpC(beg,end) { cerr<<"~"<<#end<<": "; __kumaerrc(beg,end); }
#else
#define dump(args...)
#define dumpc(ar)
#define dumpC(beg,end)
#endif
const int MOD=1000000007;
//const int MOD=998244353;
struct ModInt {
  unsigned int val;
  ModInt(): val(0) {}
  ModInt(int v) { norm(v%MOD); }
  ModInt(long long v) { norm(v%MOD); }
  ModInt& norm(long long v) {
    v=v<0?v%MOD+MOD:v; // negative
    v=v>=MOD?v-MOD:v; // mod
    val=(unsigned int)v;
    return *this;
  }
  explicit operator bool() const { return val!=0; }
  ModInt operator-() const { return ModInt(0)-*this; }
  ModInt &operator+=(ModInt that) { return norm((long long)val+that.val); }
  ModInt &operator-=(ModInt that) { return norm((long long)val-that.val); }
  ModInt &operator*=(ModInt that) { val=(unsigned long long)val*that.val%MOD; return *this; }
  ModInt &operator/=(ModInt that) { return *this*=that.inv(); }
  ModInt operator+(ModInt that) const { return ModInt(*this)+=that; }
  ModInt operator-(ModInt that) const { return ModInt(*this)-=that; }
  ModInt operator*(ModInt that) const { return ModInt(*this)*=that; }
  ModInt operator/(ModInt that) const { return ModInt(*this)/=that; }
  ModInt pow(long long n) const {
    ModInt x=*this, res=1;
    while(n>0) {
      if(n&1) res*=x;
      x*=x,n>>=1;
    }
    return res;
  }
  ModInt inv() const { return (*this).pow(MOD-2); }
  bool operator==(ModInt that) const { return val==that.val; }
  bool operator!=(ModInt that) const { return val!=that.val; }
  friend ostream& operator<<(ostream& os, const ModInt& that) { return os<<that.val; }
};
template <typename Val>
struct SegmentTree {
  int N_; // adjusted N
  vector<Val> tree;
  Val id;
  using Merge = function<Val(Val,Val)>;
  Merge merge;
public:
  SegmentTree(int N, Val id, Merge merge) { prep(N,id,merge); }
  SegmentTree(vector<Val> A, Val id, Merge merge) { prep(A.size(),id,merge), this->build(A); }
  SegmentTree& prep(int N, Val id, Merge merge) {
    this->id=id,this->merge=merge;
    int n=1; while(n<N) n<<=1; // Init by power of 2
    this->tree=vector<Val>(2*n-1,id), this->N_=n;
    return *this;
  }
  void build(const vector<Val> &ns) {
    for(int i=0; i<ns.size(); ++i) tree[i+N_-1]=ns[i];
    for(int i=N_-2; i>=0; --i) mergeAt(i);
  } // Initialize tree with `ns`
  void update(int i, const Val &x) { i+=N_-1,tree[i]=x; while(i>0) i=(i-1)/2,tree[i]=mergeAt(i); } // Update k-th (0-indexed) value
  Val query(int ql, int qr) { return queryTree(ql,qr,0,0,N_); } // query in range [ql,qr)
private:
  Val mergeAt(int i) { return tree[i]=merge(tree[2*i+1],tree[2*i+2]); }
  Val queryTree(const int ql, const int qr, int i, int tl, int tr) {
    if (tr<=ql||qr<=tl) return id; // out of range
    if (ql<=tl&&tr<=qr) return tree[i]; // all covered
    int mid=tl+(tr-tl)/2; // partially covered
    return merge(queryTree(ql,qr,2*i+1, tl,mid),
                 queryTree(ql,qr,2*i+2,mid, tr));
  }
};
template<typename Val> SegmentTree<Val> makeRmQ(vector<Val> A, Val id) {
  return SegmentTree<Val>(A,id,[](Val a, Val b) { return min(a,b); });
}
template<typename Val> SegmentTree<Val> makeRMQ(vector<Val> A, Val id) {
  return SegmentTree<Val>(A,id,[](Val a, Val b) { return max(a,b); });
}

map<int,int> idmap;

bool ok(double x, VI &A) {
  int N=SZ(A);
  auto rmq=makeRmQ(vector<double>(N,1e18),1e18);
  auto rMq=makeRMQ(vector<double>(N,-1e18),-1e18);

  REP(i,N) {
    double a=(double)A[i]-x*i,b=(double)A[i]+x*i;
    int id=idmap[A[i]];
    double maxa=rMq.query(0,id);
    //dump(i,maxa,a);
    if(maxa>=a) {
      //  dump(maxa,a,i);
        return true;
    }
    double minb=rmq.query(id+1,N);
    if(minb<=b) {
//        dump(minb,b,i);
        return true;
    }
    rMq.update(id,a),rmq.update(id,b);
  }
  return false;
}

/*
 6/21/2020
 9:05-10:22 TLE
 12:20-12:38 read editorial, prove the greedy myself and got AC
 https://twitter.com/hanseilimak/status/1274798142311948289
 https://www.topcoder.com/single-round-match-787-editorials/
 https://twitter.com/heno_code/status/1274759970743914496
 https://twitter.com/ajis_ka/status/1274762609368031233
 */
class AqaAsadiMinimizes {
  public:
  double getMin(vector<int> P, int B0, int X, int Y, int N) {
    VI A(N);
    REP(i,N) {
        if(i<SZ(P)) A[i]=P[i];
        else if(i==SZ(P)) A[i]=B0;
        else A[i]=(ModInt(A[i-1])*X+Y).val;
    }

    vector<II> ps(N);
    REP(i,N) ps[i]={A[i],i};
    sort(ALL(ps));
    double res=1e18;
    REP(i,N-1) SMIN(res,abs((double)ps[i+1].first-ps[i].first)/abs(ps[i+1].second-ps[i].second));
    return res;
  }
};

class AqaAsadiMinimizes_tle {
  public:
  double getMin(vector<int> P, int B0, int X, int Y, int N) {
    idmap.clear();
    VI A(N);
    REP(i,N) {
        if(i<SZ(P)) A[i]=P[i];
        else if(i==SZ(P)) A[i]=B0;
        else A[i]=(ModInt(A[i-1])*X+Y).val;
    }
    //dumpc(A);

    VI aa(ALL(A));
    sort(ALL(aa));
    REP(i,N) idmap[aa[i]]=i;
    //dump(SZ(idmap));
    if(SZ(idmap)<N) return 0.0;

    double good=1e9+10,bad=0;
    REP(_,100) {
      double mid=(good+bad)/2;
      bool res=ok(mid,A);
      //dump(mid,res);
      (res?good:bad)=mid;
    }

    return good;
  }
};

// CUT begin
ifstream data("AqaAsadiMinimizes.sample");

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

template <typename T> void from_stream(vector<T> &ts) {
    int len;
    from_stream(len);
    ts.clear();
    for (int i = 0; i < len; ++i) {
        T t;
        from_stream(t);
        ts.push_back(t);
    }
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

bool double_equal(const double &a, const double &b) { return b==b && a==a && fabs(b - a) <= 1e-9 * max(1.0, fabs(a) ); }

bool do_test(vector<int> P, int B0, int X, int Y, int N, double __expected) {
    time_t startClock = clock();
    AqaAsadiMinimizes *instance = new AqaAsadiMinimizes();
    double __result = instance->getMin(P, B0, X, Y, N);
    double elapsed = (double)(clock() - startClock) / CLOCKS_PER_SEC;
    delete instance;

    if (double_equal(__expected, __result)) {
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
        vector<int> P;
        from_stream(P);
        int B0;
        from_stream(B0);
        int X;
        from_stream(X);
        int Y;
        from_stream(Y);
        int N;
        from_stream(N);
        next_line();
        double __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << " ... ";
        if ( do_test(P, B0, X, Y, N, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
        int T = time(NULL) - 1592755581;
        double PT = T / 60.0, TT = 75.0;
        cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
        cout << "Score  : " << 250 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
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
        cout << "AqaAsadiMinimizes (250 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}