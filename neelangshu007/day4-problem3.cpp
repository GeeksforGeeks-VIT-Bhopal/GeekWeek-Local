#include<bits/stdc++.h>
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
  	int px,py;
  	cin>>px>>py;
  	string s;
  	cin>>s;
  	int count_u=0,count_d=0,count_r=0,count_l=0;
  	for(int i=0;i<s.size();i++){
  		if(s[i]=='U'){
  			count_u++;
		  }
		else if(s[i]=='D'){
			count_d++;
		}
		else if(s[i]=='R'){
			count_r++;
		}
		else if(s[i]=='L'){
			count_l++;
		}
	}
	
	int u,d,r,l;
	if(px>0&&py>0){
		r=px;
		u=py;
		if(count_r>=r&&count_u>=u){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	else if(px<0&&py<0){
		l=abs(px);
		d=abs(py);
		if(count_l>=l&&count_d>=d){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
  	else if(px<0&&py>0){
  		l=abs(px);
  		u=py;
  		if(count_l>=l&&count_u>=u){
  			cout<<"YES"<<endl;
		  }
		else{
			cout<<"NO"<<endl;
		}
	  }
  	else if(px>0&&py<0){
  		r=px;
  		d=abs(py);
  		if(count_r>=r&&count_d>=d){
  			cout<<"YES"<<endl;
		  }
		else{
			cout<<"NO"<<endl;
		}
	  }
	else if(px==0&&py<0){
		d=abs(py);
		if(count_d>=d){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	
	else if(px==0&&py>0){
		u=py;
		if(count_u>=u){
			cout<<"YES"<<endl;
		}
		else {
			cout<<"NO"<<endl;
		}
	}
	
	else if(px>0&&py==0){
		r=px;
		if(count_r>=r){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	
	else if(px<0&&py==0){
		l=abs(px);
		if(count_l>=l){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	
	else{
		cout<<"NO"<<endl;
	}
  	
  }
  return 0;
}
