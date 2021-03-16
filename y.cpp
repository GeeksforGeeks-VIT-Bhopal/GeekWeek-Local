
#include<bits/stdc++.h>
using namespace std;


bool ispalindrome(string s)
{
	int l = s.length();
	int j;
	
	for(int i = 0, j = l - 1; i <= j; i++, j--)
	{
		if(s[i] != s[j])
			return false;
	}
	return true;
}


int main()
{
	string s = "abcd";
	int cnt = 0;
	int flag = 0;
	
	while(s.length()>0)
	{
		// if string becomes palindrome then break
		if(ispalindrome(s))
		{
			flag = 1;
			break;
		}
		else
		{
		cnt++;
		
		// erase the last element of the string
		s.erase(s.begin() + s.length() - 1);
		}
	}
	
	// print the number of insertion at front
	if(flag)
		cout << cnt;
}
