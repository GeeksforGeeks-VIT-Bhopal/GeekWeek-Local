
#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int n;

    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum1 += a[i];
        }
        else
        {
            sum2 += a[i];
        }
    }

    int ans = min(sum1, sum2);

    cout << 2 * ans << endl;

    return 0;
}
