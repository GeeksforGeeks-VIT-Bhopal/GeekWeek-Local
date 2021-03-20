#include<bits/stdc++.h>
string lexiSmall(string s)
{
    if(s.length() == 1)
        return s;
    string x = lexiSmall(s.substr(0, s.length()/2));
    string y = lexiSmall(s.substr(s.length()/2));
    
    return min(x+y, y+x);
}
bool similarStrings(string &a, string &b)
{
    return lexiSmall(a) == lexiSmall(b);
}
