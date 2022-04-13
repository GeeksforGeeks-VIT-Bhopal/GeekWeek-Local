#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,k,a=0;
    cin>>x>>k;  // number, base
    while(x!=1){
        x/=k;
        a++;
    }
    cout<<a;
    return 0;
}
