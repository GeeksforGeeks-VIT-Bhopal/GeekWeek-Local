#include<bits/stdc++.h>
using namespace std;

class EvilCakeCutter{
public:
    double successProbability(int W, int H, int W1, int H1){
        double w=W,h=H,w1=W1,h1=H1;
        double avA=(w-w1)(h-h1);
        double prob=0;
        if(avA==0){
            prob=0;
            return 0;
        }
        if((h-2h1)<0 && (w-2w1)<0){
            return prob;
        }

        if((h-2h1)>=(h/2) || (w-2w1)>=(w/2)){
            prob=1;
            return 1;
        }
        // double area=2(max(h-2h1,0))(w-w1)+2(max(0,w-2w1))(3h1-h);
        double area=0;
        area+=2(max(0.0,h-2h1)(w-w1));
        area+=2(max(0.0,w-2w1)(h-h1));
        area-=4(max(0.0,h-2h1)max(0.0,w-2w1));
        prob=area/avA;




        return prob;
    }
};

int32_t main(){
    ios::sync_with_stdio(false);
    EvilCakeCutter E;
    cout<<E.successProbability(3,2,1,1)<<"\n";
    cout<<E.successProbability(2,2,1,1)<<"\n";
     cout<<E.successProbability(8,5,3,2)<<"\n";



    return 0;
}
