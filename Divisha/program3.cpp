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

    // If the leng
