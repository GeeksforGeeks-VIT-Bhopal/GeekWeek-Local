#include<bits/stdc++.h>
using namespace std;
class KerimJavati{
public:
	int howLong(string text){
		int ans=0;
		for(int i=0;i<text.size();i++){
			ans+=(2*(text[i]+1-'a')-1);
		}
		return ans;
	}
};
