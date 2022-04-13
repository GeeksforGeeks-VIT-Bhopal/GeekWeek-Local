#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a,  int b, int c, int d)
{
    int mx1 = max(a, b);
    int mx2 = max(c, d);
    int ans = max(mx1,mx2);
    return ans;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
