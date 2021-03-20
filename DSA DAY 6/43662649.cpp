#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int wtf(long long int n,long long int e,long long int h,long long int a,long long int b,long long int c);
long long int least(long long int a,long long int b);
long long int most(long long int a,long long int b);

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,e,h,a,b,c;
        cin>>n>>e>>h>>a>>b>>c;
        long long int whatever;
        whatever = wtf(n,e,h,a,b,c);
        if (whatever==1e15)
            cout<<-1<<endl;
       else
            cout<<whatever<<endl;
    }
    return 0;
}

long long int wtf(long long int n,long long int e,long long int h,long long int a,long long int b,long long int c){
    if (n<=0){
        return 0;
    }
    long long int ans = 1e15;
    unsigned long long int temp;

    if((n<=e) && (n<=h)){
        ans = least(ans,n*c);
    }
    if (3*n<=h){
        ans = least(ans,n*b);
    }
    if (2*n<=e){
        ans = least(ans,n*a);
    }
    if(((h-n)/2>=1) && ((h-n)/2>=n-e)){
        if (b-c<0){
            temp = least(n-1,(h-n)/2);
            ans = least(ans,(b-c)*temp+ n*c);
        }
        else{
            temp = most(1,n-e);
            ans = least(ans,(b-c)*temp+n*c);
        }
    }
    if (e-n>=1 && e-n>=n-h){
        if (a-c<0){
            temp = least(n-1,e-n);
            ans = least(ans,(a-c)*temp+n*c);
        }
        else{
            temp = most(1,n-h);
            ans = least(ans,(a-c)*temp+n*c);
        }
    }
    if ((e/2>=1)&&(e/2>=(3*n-h+2)/3)){
        if (a-b<0){
            temp = least(n-1,e/2);
            ans = least(ans,(a-b)*temp+n*b);
        }
        else{
            temp = most(1,(3*n-h+2)/3);
            ans = least(ans,(a-b)*temp+n*b);
        }
    }
    if ((e>=3)&&(h>=4)&&(n>=3)){
        ans = least(ans,a+b+c+wtf(n-3,e-3,h-4,a,b,c));
    }
    return ans;
}
long long int least(long long int a,long long int b){
    if (a<b)
        return a;
    return b;
}
long long int most(long long int a,long long int b){
    if (a>b)
        return a;
    return b;
}
