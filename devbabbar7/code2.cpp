//https://www.codingninjas.com/codestudio/problems/shuffle-two-strings_1115692
#include <vector>
#include <string>

bool isInterleave(string a, string b, string c){
	if(b.length()>a.length()){
        swap(a,b);
    }
    int n1 = a.length(), n2 = b.length(), n3 = c.length();
    vector<bool> dp(n2 + 1, false);
    if(n1 + n2 != n3) {
        return false;
    }
    int i,j;
    for(i = 0; i <= n1; i++){
        for(j = 0; j <= n2; j++){
            if(i == 0 && j == 0){
                dp[j] = true;
            }
            else if(i == 0){
                dp[j] = dp[j - 1] && (b[j - 1] == c[j - 1]);
            }
            else if(j == 0){
                dp[j] = dp[j] && (a[i - 1] == c[i - 1]);
            }
            else{
                dp[j] = (dp[j] && a[i - 1] == c[i + j - 1]) || (dp[j - 1] && b[j - 1] == c[i + j - 1]);
            }
        }
    }
    return dp[n2];
}
