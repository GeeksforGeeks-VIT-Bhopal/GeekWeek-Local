#include <bits/stdc++.h>
using namespace std;
int main() { 
    stack<long> s;
     stack<int> ts; 
     ts.push(0);
    int t,q;
    cin>>t;
    while(t--)
    { 
        cin>>q;
        if(q==1)
        { 
            long val;
            cin>>val;
            s.push(val);
            if(val>=ts.top())
                   ts.push(val) ;
        }
        else if(q==2)
            if(s.top()==ts.top())
             {
                s.pop();
                ts.pop();
             }
             else 
               s.pop();
        else
           cout<<ts.top()<<"\n";
        }
    return 0;
}
