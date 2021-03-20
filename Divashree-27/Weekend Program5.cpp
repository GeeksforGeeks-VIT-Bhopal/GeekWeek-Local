#include <iostream>
#include <cstdio>
using namespace std;
char a1[][10]={"one","two","three","four","five","six","seven","eight","nine"};
int main() {
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
        {
        if(i<=9)
            cout<<a1[i-1]<<endl;
        else
        {
            if(i&1)
        cout<<"odd\n";
        else
        cout<<"even\n";
        }
         //     cout<<"nine\n";
    }
    
    // Complete the code.
    return 0;
}
