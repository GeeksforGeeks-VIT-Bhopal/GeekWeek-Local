#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<unordered_map>
#define ll long long
#define dd double
using namespace std;
const ll MOD = 1e9 + 7;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
  	ll n,k;
  	cin>>n>>k;
  	ll a[n];
  	ll i;
  	for(i=0;i<n;i++){
  	  cin>>a[i];	
	}
	
	if(a[0]>k){
		cout<<"-1"<<endl;
		continue;
	}
	
	ll sum=0;
	ll count=0;
	for(i=0;i<n;i++){
		if(a[i]<=k&&sum+a[i]<=k){
			sum=sum+a[i];
		}
		else{
			sum=0;
			i--;
			count++;
		}
		
	}
	
	if(sum<=k&&a[n-1]<=k){
		cout<<count+1<<endl;
	}
	else{
		cout<<"-1"<<endl;
	}
	
	
  }

  return 0;
}

