#include<bits/stdc++.h>
#define ll long long int
#define dd double
using namespace std;
const ll MOD = 1e9 + 7;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll t;
  cin>>t;
  while(t--){
  	ll n,d;
  	cin>>n>>d;
    ll a[n];
  	ll i;
  	for(i=0;i<n;i++){
  		cin>>a[i];
	}
	double countr=0;
	double countn=0;
	for(i=0;i<n;i++){
		if(a[i]<80&&a[i]>9){
			countn++;
		}
		else{
			countr++;
		}
	}
  	
//  cout<<countr<<"-"<<countn<<endl;

    double totalr=ceil(countr/d);
    double totaln=ceil(countn/d);
//    cout<<totalr<<"-"<<totaln<<endl;
    cout<<totalr+totaln<<endl;
  	
  }
  return 0;
}
