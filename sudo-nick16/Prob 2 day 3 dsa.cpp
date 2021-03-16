#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],b[10],m,n,count,fc,ic;
    cin>>m>>n;
    count=0;
    fc=0;
    ic=0;
    for(int i=0;i<m;i++)
     cin>>a[i];
    for(int i=0;i<n;i++)
      cin>>b[i];
    for(int e=1;e<=100;e++)
{   ic=0;
     for(int f=0;f<m;f++)   
           { if(e%a[f]==0)
              { ic++;
              }
              else 
               f=m;
           };
        if(ic==m)
    { count=0;
        for(int g=0;g<n;g++)  
            { 
                if(b[g]%e==0)
                { count++;
                }
                else
                    g=n;
    };
                                  
        if(count==n)
            { fc++ ;  
            };
        };
    };     
    cout<<fc;
  return 0;
}
