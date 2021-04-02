// https://www.codechef.com/problems/CHOLAT
#include <bits/stdc++.h>
using namespace std;

int solve(long long int *arr, int n)
{

    sort(arr, arr + n);
    long long int prev = arr[0];
    int p = 1;
    int c = 1;

    while (p < n)
    {

        if (arr[p] != prev)
        {
            prev = arr[p];
            c++, p++;
        }

        else
        {
            p++;
        }
    }

    return c;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tcases;
    cin >> tcases;

    while (tcases--)
    {
        int n;
        cin >> n;
        long long int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << solve(arr, n) << endl;
    }

    return 0;
}