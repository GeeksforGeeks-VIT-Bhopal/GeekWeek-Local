#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, t;
    cin >> n;
    int h[10001] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        h[t]++;
    }
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> t;
        h[t]--;
    }

    for (int i = 0; i <= 10000; i++)
    {
        if (h[i] != 0)
            cout << i << " ";
    }
}