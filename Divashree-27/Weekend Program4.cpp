#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long mask[40000000];

unsigned insert(unsigned x) {
    unsigned res = (mask[x >> 6] & (1ULL << (x & 0x3F))) == 0;
    mask[x >> 6] |= 1ULL << (x & 0x3F);
    return res;
}

int main() {
    unsigned N, S, P, Q;
    cin >> N >> S >> P >> Q;
    unsigned x = S;
    unsigned ans = 0;
    ans += insert(x);
    for (unsigned i = 1; i < N; i++) {
        x = (1LL * x * P + Q) % 2147483648;
        ans += insert(x);
    }
    cout << ans << endl;
    return 0;
}
