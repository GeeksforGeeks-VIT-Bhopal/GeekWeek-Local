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
  	ll k;
  	cin>>k;
  	string f;
  	ll i;
  	while(k>=100){
  	for(i=97+k;i>=97&&i<=123;i--){
  		f=f+char(i);
	  }
	 k=k-25;
    }
	
	cout<<f<<endl;
  }

  return 0;
}
