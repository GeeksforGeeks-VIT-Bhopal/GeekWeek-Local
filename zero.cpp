#include <iostream>
using namespace std;
void fn(int a , int b)
{
    if (a>b)
                 {

                    b=0;
                    cout<<a;
                 }
    else(){
        a=0;
        cout<<b;
    }

}

int main()
{
    inc c;
    int d;
    cout<<"enter two numbers\n";
    cin>>c>>d
    fn(c,d)
    return 0;
}