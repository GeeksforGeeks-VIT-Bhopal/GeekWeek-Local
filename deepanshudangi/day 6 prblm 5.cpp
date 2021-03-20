// Agent Chef Problem Code: CDIT03
// Site link- https://www.codechef.com/problems/CDIT03

#include <iostream>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n], sum[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < n; j++)
            b[n - j - 1] = a[j];
        int s = n - 1;
        int temp, carry = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            temp = a[i] + b[i] + carry;
            sum[s] = temp % 10;
            carry = temp / 10;
            s--;
        }

        if (carry == 1)
            cout << "1 ";
        for (int i = 0; i < n; i++)
            cout << sum[i] << " ";
        cout << endl;
    }
}
