// https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays

#include <bits/stdc++.h>
using namespace std;
int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    return max;
}
int main()
{
    int arr[1000];
    int i, t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> arr[i];
        cout << largest(arr, n) << endl;
    }
    return 0;
}
