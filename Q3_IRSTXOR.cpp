#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll T,d,C,A,B,max;
    cin>>T;
    while(T--){
        cin>>C;
        max=C,d=0;
        while(max){
            max/=2;
            d++;
        }
        A=pow(2,d-1)-1;
        B=C^A;
        max=A*B;
        cout<<max<<endl;
    }
}