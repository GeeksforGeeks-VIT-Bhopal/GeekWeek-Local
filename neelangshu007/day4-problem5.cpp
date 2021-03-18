#include<bits/stdc++.h>
#define ll long long
#define dd double
using namespace std;
const ll MOD = 1e9 + 7;

int check_prime(int n){
	int i;
	for(i=2;i<n;i++){
		if(n%i==0){
			break;
		}
	}
	
	if(i==n){
//		cout<<n<<"true"<<endl;
       return 1;
	}
	
	else{
//		cout<<n<<"false"<<endl;
        return 0;
	}
    
    
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,m;
  cin>>n>>m;
  for(int i=n+1;i<m;i++){
     int check=check_prime(i);
     if(check==1){
     	cout<<"NO"<<endl;
     	return 0;
	 }
  }
  
  int check=check_prime(m);
  if(check==1){
  	cout<<"YES"<<endl;
  }
  else{
  	cout<<"NO"<<endl;
  }
  
   return 0;
}
