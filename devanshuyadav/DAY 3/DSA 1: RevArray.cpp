// ques: https://www.hackerrank.com/challenges/arrays-ds/problem
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10000],arr2[10000], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr[n-i-1];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}
