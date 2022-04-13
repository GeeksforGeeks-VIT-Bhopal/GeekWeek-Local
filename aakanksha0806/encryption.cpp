#include <iostream>
using namespace std;

int main()
{
    int i,x;
    char str[100];

    cout<<"Enter string: "<<endl;
    cin>>str;

    for (int i = 0;i<100 && str[i] != '\0';i++)
    {
        str[i] = str[i] + 2;
    }

    cout<<"Encrypted string is: "<<str<<endl;
}