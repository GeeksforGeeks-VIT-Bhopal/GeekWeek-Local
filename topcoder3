#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <b; i++)
typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef vector<long long> vl;
typedef pair<int,int> pi;
#define trace(x) cout<<#x<<"="<<x<<"\n";
#define sz(x) (int)(x.size())
#define mod 1000000007
#define endl "\n"
template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v ) {
    os << "{";
    typename vector< T > :: const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v ) {
    os << "[";
    typename set< T > :: const_iterator it;
    for ( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
    os << "[";
    typename map< F , S >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ ) {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define deb(x) cerr << #x << " = " << x << endl;

class BouncingBall{
public:
     double getPosition(double g, double h, double p, double t){
        g=g/100;
        double curt=sqrt((2*h)/g);
        double curv=sqrt(2*g*h);

        vector<double>T,V;
        T.push_back(0);
        V.push_back(0);
        T.push_back(curt);
        V.push_back(curv);
        while(curt<t){
            double CC=curv;
            curv=sqrt((100-p)/100.0)*CC;
            curt=curt+2*(CC)/g;
            T.push_back(curt);
            V.push_back(curv);
        }
        deb(T);
        deb(V);
        double tt=T[T.size()-2];
        double ans;
        if(tt==0){
            deb("down");
            // it is down
            ans=h-(g*t*t)/2.0;
        }
        else{
            double remt=t-tt;
            double treach=V[V.size()-1]/g;
             double vv=V[V.size()-1];
             deb(remt);
            if(remt<treach){
                deb("going up");
                ans=vv*remt-(g*remt*remt)/2;
            }
            else{
                remt=remt-(vv/g);
                deb("going down");
                ans=(vv*vv)/(2*g)-(g*remt*remt)/2;
            }
        }
        return ans;

     }
};


int32_t main(){
    ios::sync_with_stdio(false);
    double g, h, p, t;
    cin>>g>>h>>p>>t;
    BouncingBall B;
    deb(B.getPosition(g,h,p,t));

    return 0;
}
