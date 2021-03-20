#include <bits/stdc++.h>
int uniqueSubstrings(string input)
{
    unordered_map <char,int> m;
    int sz= input.size();
    int maxLen=0;
    int len=0;
    for(int i=0;i<sz;i++){
        if(m.find(input[i]) != m.end()){
            maxLen= max(maxLen, len);
            
            if((m.find(input[i])->second) >= (m.find(input[i-len])->second))
            len=i-m[input[i]];
            else 
            len++;
        }
        else{
            len++;
        }
        
        m[input[i]]=i;
    }
    return max(maxLen,len);
}
