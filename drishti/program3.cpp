#include <vector>
#include <string>

bool isInterleave(string a, string b, string c){

    // We want to reduce the space complexity to O(min(N,M)). 
    // We swap the two strings if b.length() > a.length(), so that we can make a dp array of size b.length()+1.
    if(b.length() > a.length()){
        swap(a,b);
    }

    int n1 = a.length(), n2 = b.length(), n3 = c.length();

    // Create a dp array of size n2 and initialise it to false.
    vector<bool> dp(n2 + 1, false);

    // If the length of "c" is not equal to the sum of the length of "a" and "b", then return false.
    if(n1 + n2 != n3) {
        return false;
    }

    int i,j;

    for(i = 0; i <= n1; i++){

        for(j = 0; j <= n2; j++){

            // Mark dp[j] as true, if the values of i and j are both zeroes.
            if(i == 0 && j == 0){
                dp[j] = true;
            }

            // Check for the case when i = 0.
            else if(i == 0){
                dp[j] = dp[j - 1] && (b[j - 1] == c[j - 1]);
            }

            // Check for the case when j = 0.
            else if(j == 0){
                dp[j] = dp[j] && (a[i - 1] == c[i - 1]);
            }
