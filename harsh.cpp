#include<iostream>
using namespace std;
class Distance{
    private:
        int meter;
        friend int adda(Distance);
    public:
        Distance():meter(0){}
};
int adda(Distance d){
    d.meter+= 7;
    return d.meter;
}
int main(){
    Distance D;
    cout<<"distance-:"<<adda(D);
    return 0;
};
