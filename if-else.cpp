#include<iostream>
using namespace std;

int main() {

    int savings;
    cin>>savings;

    if(savings>5000) {
        cout<<"Neha"<<endl;
    } else if (savings>2000){
        cout<<"Rashmi"<<endl;
    } else{
        cout<<"Friends"<<endl;
    }

    int savings;
    cin>>savings;

    if(savings>5000) {
        if (savings>10000) {
            cout<<"Roadtrip with Neha"<<endl;
        } else {
            cout<<"Shopping with Neha"<<endl;
        }
    } else if (savings>2000){
        cout<<"Rashmi"<<endl;
    } else{
        cout<<"Friends"<<endl;
    }

    int a,b,c;
    cin>>a>>b>>c;
    
    if (a>b){
        if (a>c){
            cout<<a<<endl;
        }
    }
    else {
        if (b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
  
    int n;
    cin>>n;

    if (n%2==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }
    
    

    return 0;
}
