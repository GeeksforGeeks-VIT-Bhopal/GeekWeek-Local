void generate(int i,int n,char a[],vector<string> &v){
    if(i==n){
    	string b;
    	for(int i=0;i<n;i++)
    	b+=a[i];
        v.push_back(b);
        return;
    }
    a[i]='0';
    generate(i+1,n,a,v);
    if(i==0||a[i-1]!='1')
    {
	a[i]='1';
	generate(i+1,n,a,v);
    }
}
vector<string> generateString(int n) {
    vector<string>v;
    char a[n];
    generate(0,n,a,v);
    return v;
    
    // Write your code here
}
