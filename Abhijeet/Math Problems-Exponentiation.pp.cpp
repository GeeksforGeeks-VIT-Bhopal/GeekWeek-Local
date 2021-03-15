#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	unsigned long long int n,a,b;
	long long int ans;
	const unsigned int M = 1000000007;
	cin>>n;
	while(n>0)
	{
		cin>>a;
		cin>>b;
		ans=(long long int)pow(a,b);	
		cout<<ans<<endl;
		ans=ans%M;
		cout<<ans<<endl;
		n--;
	}
	return 0;
}
