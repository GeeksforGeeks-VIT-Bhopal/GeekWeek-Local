void recur(int i,char a[],string s,map<int,string>m,vector<string>&v)
{
    if(i==s.length())
    {
        string b;
    	for(int i=0;i<s.length();i++)
    	b+=a[i];
        v.push_back(b);
        return;
    }
    for(int j=0;j<m[s[i]-'0'].length();j++)
    {
        a[i]=m[s[i]-'0'][j];
        recur(i+1,a,s,m,v);
    }
}
vector<string> combinations(string s){
	map<int,string>m;
    vector<string>v;
    m[2]="abc";
    m[3]="def";
    m[4]="ghi";
    m[5]="jkl";
    m[6]="mno";
    m[7]="pqrs";
    m[8]="tuv";
    m[9]="wxyz";
    char a[s.length()];
    recur(0,a,s,m,v);
    return v;
    
	// Write your code here
	
}
