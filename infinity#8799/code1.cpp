#include<bits/stdc++.h>
string mostFrequentWord(string a, string b){
	istringstream ss(a), ss1(b);
    string word;
     unordered_map<string, int> mp;
    while(ss >> word)
    {
        //cout << word << " ";
        if(mp.find(word) == mp.end())	
            mp[word] = 1;
        else
        	mp[word] += 1; 
        
    }
     while(ss1 >> word)
    {
            mp.erase(word);   
    }
    
   int mxoc=0;
    for(auto i: mp)
    {
        mxoc = max(mxoc, i.second);
    }
    vector<string> v;
    for(auto i: mp)
    {
        if(i.second == mxoc)
        {
            v.push_back(i.first);
        }
    }
    if(v.empty())
        return "-1";
    string lexsmall = v[0];
    for(int i=1; i<v.size(); i++)
    {
        if(v[i] < lexsmall)
            lexsmall = v[i];
    }
    return lexsmall;
    
}
