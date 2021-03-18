/* CSES Problem Set
   Introductory Problems
   MISSING NUMBER
*/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n,sum=0;
    cin>>n;
    for(long long int i=0;i<n-1;i++)
    {
    	int k;
    	cin>>k;
    	sum=sum+k;
	}
    long long int soln=((n*(n+1))/2)-sum ;
    cout<<soln<<"\n";
}

int main()
{
ios_base::sync_with_stdio(0); cin.tie(0);
   solve();
return 0;
}
