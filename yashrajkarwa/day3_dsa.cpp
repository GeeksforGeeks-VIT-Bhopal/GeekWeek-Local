#include <iostream>
#include <cmath>

using namespace std;

class DivideThePlane{
    int H, V;
    long N;

public:
    DivideThePlane(){
        cin>>H>>V>>N;
    }
    long makeCuts();
};

long DivideThePlane::makeCuts()
{
    int r=sqrt(N), a, b, i;
    if(N<=(H+1)*(V+1))
        return 0;
    else
    {
        while(true){
            for(i=r;N%i==0||i>1;i--)
            {
                a=i;
                b=N/i;
            }
            if(i==1)
                if(V==0||H==0){
                    b=N;
                    a=0;
                }
            else{ 
                a=0;
                b=0;
            }

            if(H>=V&&H<=b&&V<=a)
                return (H-b)+(V-a);
            else if(V>H&&V<=b&&H<=a)
                return (H-b)+(V-a);
            else
                return 0;
        }
    }
}

int main()
{
    DivideThePlane plane;

    cout<<plane.makeCuts();

    return 0;
}