// link: https://www.hackerrank.com/challenges/2d-array/problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s = -1000000000, m = 0, arr[6][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++, m = 0)
        {
            m = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j + 0] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            if (s <= m)
                s = m;
        }
    }
    cout << s << endl;

    return 0;
}
