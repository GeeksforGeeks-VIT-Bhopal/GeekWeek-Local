//coding ninjas Amazing Strings
#include<iostream>
using namespace std;

int main()
{
    string a,b,c,ab;
    cout<<"Enter 3 strings";
    cin>>a>>b>>c;
    ab=a+b;

    if (ab==c)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;

}
