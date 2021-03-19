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
