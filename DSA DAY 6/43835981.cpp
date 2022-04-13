#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int paparazi(long long int n,vector<pair<int,int>>arr,vector<pair<int,int>>brr){
                brr.push_back(arr[0]);
                brr.push_back(arr[1]);
                //cout<<brr[0]<<endl;
                int ans=1;
                int len = brr.size();
                for(int i=2;i<n;i++){
                    while(brr.size()>=2){
                        double ans1 = ((double)brr[len-1].second-(double)brr[len-2].second)/((double)brr[len-1].first-(double)brr[len-2].first);
                        //cout<<(double)st[len-1].second<<endl;
                        double ans2 = ((double)arr[i].second-(double)brr[len-1].second)/((double)arr[i].first-(double)brr[len-1].first);
                if(ans1<=ans2){
                    brr.pop_back();
                    len--;
                }else
                    break;
            }
            brr.push_back(arr[i]);
            len++;
            ans = max(ans,brr[len-1].first-brr[len-2].first);
        }return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>arr,brr;
        for(int i=0;i<n;i++){
                int temp;
                cin>>temp;
                arr.push_back({i+1,temp});
        }
        if (n==2){
            cout<<1<<endl;
            continue;
        }else{
            long long int ans = paparazi(n,arr,brr);
            cout<<ans<<endl;
        }


    }return 0;
}
