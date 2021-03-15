#include<iostream>
using namespace std;
int fact(int n){
    int a=1;
    for(int k=1;k<=n;k++){
        a=a*k;
    }
    return a;
}


int main()
{
    int n;
    cout<<"enter any number : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j));
        }
        cout<<endl;
    }
    return 0;
}