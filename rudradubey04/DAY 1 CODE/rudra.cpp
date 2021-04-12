#include <iostream>
using namespace std;
int main()
{
    int num, rev = 0;
    cout<<"Enter any number:";
    cin>>num;
    for (rev = 0; num > 0; num = num / 10) 
    {
      rev = rev * 10;
      rev = rev + num % 10;
    }
    cout<<"Reversed number is: "<<rev;
    return 0;
}
