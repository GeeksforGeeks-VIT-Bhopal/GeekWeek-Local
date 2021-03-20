#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int T,N,a,max=0,min;
    cin>>T;
    while(T--){
        cin>>N;
        cin>>a;
        max=a;
        min=a;
        N--;
        for(int i=0;i<N;i++){
            cin>>a;
            if(a>max)
                max=a;
            else if(a<min)
                min=a;
        }
        cout<<(2*(max-min))<<endl;
    }
}