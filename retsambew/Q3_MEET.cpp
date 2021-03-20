#include <bits/stdc++.h>
using namespace std;
int con(string X,string x){
    string s=string(1,X[0])+X[1]+X[3]+X[4];
    int a=stoi(s);
    if(X[0]=='1'&&X[1]=='2'){
        if(x=="AM"){
            s[0]='0';
            s[1]='0';
        }
        return stoi(s);
    }
    if(x=="PM"){
        return (a+1200);
    }
    return a;
}
int main(){
    string P,p,L,R,a,b;
    int T,N,t;
    cin>>T;
    while(T--){
        string ans="";
        cin>>P>>p>>N;
        t=con(P,p);
        while(N--){
            cin>>L>>a>>R>>b;
            if(t>=con(L,a)&&t<=con(R,b)){
                ans.push_back('1');
            }
            else{
                ans.push_back('0');
            }
        }
        cout<<ans<<endl;
    }
}