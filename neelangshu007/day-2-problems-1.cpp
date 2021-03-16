#include<bits/stdc++.h>
using namespace std;
int countDistinctSubstrings(string s)
{
    set<string> result ; 
  
    // List All Substrings 
    for (int i = 0; i <= s.length(); i++) 
    { 
        for (int j = 1; j <= s.length()-i; j++) 
        { 
  
            // Add each substring in Set 
            result.insert(s.substr(i, j)); 
        } 
    } 
  
    // Return size of the HashSet 
    return result.size()+1; 
}
