// {{{ Headers
// vim:filetype=cpp:foldmethod=marker:foldmarker={{{,}}}

#include <cassert>
#include <cctype>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#include <algorithm>
#include <deque>
#include <functional>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>

#include <fstream>
#include <iostream>
#include <sstream>

#include <ext/numeric>

using namespace std;
using namespace __gnu_cxx;
// }}}

typedef long long int64;
const int INF = 0x3f3f3f3f;
template <class T> inline int len (const T &a) { return a.size (); }

// {{{ BIT
typedef int64 DTYPE;
#define MAXN 10000005
DTYPE tree [MAXN];
struct
BIT {
    int N;
    BIT (int n) {
        N = n;
        for (int i = 0; i <= N; i++) tree [i] = 0;
    }
    DTYPE
    query (int idx) {
        DTYPE ret = 0;
        for (int i = idx; i > 0; i -= (i & -i))
            ret += tree [i];
        return ret;
    }
    DTYPE
    query (int x, int y) {
        return query (y) - query (x - 1);
    }
    void
    update (int idx, DTYPE delta = 1) {
        for (int i = idx; i <= N; i += (i & -i))
            tree [i] += delta;
    }
};
// }}}

int
main () {
#ifdef LOCALHOST
    freopen ("test.in", "r", stdin);
    // freopen ("test.out", "w", stdout);
#endif
    int N, Q, lo, hi, x;
    scanf ("%d %d", &N, &Q);
    BIT b (N + 5);
    for (int i = 0; i < Q; i++) {
        scanf ("%d %d %d", &lo, &hi, &x);
        b.update (lo, x);
        b.update (hi + 1, -x);
    }
    int64 ret = 0;
    for (int i = 1; i <= N; i++)
        ret = max (ret, b.query (i));

    printf ("%lld\n", ret);

    return 0;
}
