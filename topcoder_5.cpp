#include<bits/stdc++.h>
using namespace std;
class OrderlyString{
public:
    int dp[250];
    int longestLength(string s){
        memset(dp,-1,sizeof(dp));
        dp[0]=1;
        for(int i=1;i<s.size();i++){
            dp[i]=1;
            for(int j=0;j<i;j++){
                if(s[j]<=s[i]){
                    dp[i]=max(dp[i],1+dp[j]);
                }
            }
        }
        int ans=-1;
        for(int i=0;i<s.size();i++){
            if(ans<dp[i]){
                ans=dp[i];
            }
        }
    
        return ans;
    }
};

int32_t main(){
    ios::sync_with_stdio(false);

    OrderlyString O;
    cout<<O.longestLength("ABCDEFG")<<"\n";
    cout<<O.longestLength("GFEDCBA")<<"\n";
    cout<<O.longestLength("ACBB")<<"\n";

    return 0;
}
