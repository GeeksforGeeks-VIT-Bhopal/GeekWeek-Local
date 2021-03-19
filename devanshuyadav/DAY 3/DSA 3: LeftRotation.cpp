//ques: https://www.hackerrank.com/challenges/array-left-rotation/problem
#include <bits/stdc++.h>
using namespace std;
void rotateleft(vector<int> &a, int n, int d)
{
    if (d == 0)
        return;
    for (int i = 0; i < d; i++)
    {
        a.push_back(a[0]);
        a.erase(a.begin());
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i]<<" ";
    }
}
int main()
{
    vector<int> arr;
    int n, d,input;
    cin >> n >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        arr.push_back(input);
    }
    rotateleft(arr, n, d);

    return 0;
}
