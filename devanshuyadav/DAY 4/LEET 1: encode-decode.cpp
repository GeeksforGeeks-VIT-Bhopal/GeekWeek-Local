// link: https://leetcode.com/problems/encode-and-decode-tinyurl/submissions/
#include<bits/stdc++.h>
class Solution {
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        int n=2;
        for(int i=0;i<longUrl.length();i++)
        {
            if(longUrl[i]>='a' && longUrl[i]<='z')
            {
                longUrl[i]+=n;
                if(longUrl[i]>'z')
                    longUrl[i]=longUrl[i]-('z'-'a'+1);
                else if(longUrl[i]<'a')
                    longUrl[i]=longUrl[i]+('z'-'a'+1);
            }
        }
        return longUrl;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int n=2;
        for(int i=0;i<shortUrl.length();i++)
        {
            if(shortUrl[i]>='a' && shortUrl[i]<='z')
            {
                shortUrl[i]-=n;
                if(shortUrl[i]>'z')
                    shortUrl[i]=shortUrl[i]-('z'-'a'+1);
                else if(shortUrl[i]<'a')
                    shortUrl[i]=shortUrl[i]+('z'-'a'+1);
            }
        }
        return shortUrl; 
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
