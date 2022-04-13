// https://www.hackerrank.com/challenges/variable-sized-arrays/problem
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n,q,k,i,j;
    cin>>n>>q;
    ll *a[n];
    for (i = 0; i < n; i++)
    {
        cin>>k;
        a[i]=new ll[k];
        for (j = 0; j < k; j++)
        {
            cin>>a[i][j];
        }
    }
    
    for (int m = 0; m < q; m++)
    {
        cin>>i>>j;
        cout<<a[i][j]<<endl;
    }
}