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
  	ll n;
  	cin>>n;
  	ll s[n];
  	ll i;
  	for(i=0;i<n;i++){
  	  cin>>s[i];
	}
	
	ll min=abs(s[0]-s[1]);
    for(i=0;i<n-1;i++){
    	for(ll j=i+1;j<n;j++){
    		ll sub=abs(s[i]-s[j]);
    		if(sub<min){
    			min=sub;
			}
		}
	}
	
	cout<<min<<endl;
  	
  	
  }
  return 0;
}
