#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
#include<vector>
#include<set>
#include<map>
#include<algorithm>
#include<unordered_map>
#include<bits/stdc++.h>
#define ll long long 
#define dd double
using namespace std;

int main()
{
  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
  	int n;
  	cin>>n;
  	if(n<=6+10+14){
	   cout<<"NO"<<endl;
	}
	
	else{
		cout<<"YES"<<endl;
		int ans=n-(6+10+14);
		
		if(ans==6||ans==14||ans==10){
			cout<<"6 10 15 "<<n-(6+10+15)<<endl;
		}
		
		else{
			cout<<"6 10 14 "<<ans<<endl;
			
		}
		
	}

  	
  }
  
  return 0;
}
