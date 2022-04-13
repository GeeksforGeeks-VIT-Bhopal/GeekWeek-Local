#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=10;i!=0;i--){
        if(N%i==0){
            cout<<i;
            break;
        }
    }
}