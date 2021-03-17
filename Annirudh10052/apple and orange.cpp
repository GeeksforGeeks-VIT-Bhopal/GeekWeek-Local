#include <bits/stdc++.h>

using namespace std;
int main(){
    int s,t;
    cin>>s>>t;
    int a,b;
    cin>>a>>b;
    int m,n;
    cin>>m>>n;
    int arr1[m];
    int arr2[n];
    int apple_count=0;
    int orange_count=0;
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    for(int i=0;i<m;i++)
    {
        arr1[i]=arr1[i]+a;
        if(arr1[i]>=s && arr1[i]<=t){
            apple_count++;
        }
    }
    cout<<apple_count<<endl;
    
     for(int i=0;i<n;i++)
    {
        arr2[i]=arr2[i]+b;
        if(arr2[i]>=s && arr2[i]<=t){
            orange_count++;
        }
    }
    cout<<orange_count;
}


