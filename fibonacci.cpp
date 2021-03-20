#include<iostream>
using namespace std;

int fib( int n){
    int a = 0;
    int b= 1;
    int c;
    cout<<a<<endl;
    cout<<b<<endl;
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout<<c<<endl;
    }
    
}
int main() {
    int n = 12;
    cout<<"The fibonacci is: "<<fib(n)<<endl;
    
    return 0;
}
