#include <cmath>
#include <cstdio>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[6][6],s;
    int m=INT_MIN;
    //int s;
    for(int i=0;i<6;i++)
        {
        for(int j=0;j<6;j++)
            {
            cin>>a[i][j];
        }
    }
  // int j;
    for(int i=0;i<4;i++)
        {
         // j=0;
        for(int j=0;j<4;j++)
            {
            s=(a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2]);
            if(s>m)
                m=s;
        }


            }
    cout<<m;



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
[00:14]
------------------------------------------------------------------------------------------------------------
3
------------------------------------------------------------------------------------------------------------
[00:16]
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=d;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<d;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
[00:16]
------------------------------------------------------------------------------------------------------------
4
------------------------------------------------------------------------------------------------------------
[00:19]
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
#include<string>
using namespace std;


int main()
{

    int n;
    cin >> n;
    map<string, int>mp;
    while (n--)
    {
        string t;
        cin >> t;
        mp[t]++;
    }
    int a;
    cin >> a;
    while (a--)
    {
        string t;
        cin >> t;
        cout << mp[t] << endl;
    }
    return 0;
}
