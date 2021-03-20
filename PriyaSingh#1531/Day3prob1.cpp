#include<iostream>
using namespace std;

int main()
{
    int n;int m;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>m;
    string q[m];
    for(int i=0;i<m;i++)
    cin>>q[i];
    
    for(int i=0;i<m;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(q[i]==a[j])
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}