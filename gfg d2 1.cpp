#include <iostream>
#include <cstring>
using namespace std;
void checkPangram(string s, int n)
{

}

int main()
{
    char s[]=" ";
    int n;
    cin>>n>>s;

    int len=strlen(s);

    if (len==n)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}

