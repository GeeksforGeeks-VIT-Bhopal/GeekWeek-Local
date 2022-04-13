#include<bits/stdc++.h>
using namespace std;

string removeConsecutiveDuplicates(string s)
{
    if (s.size() <= 1)
    {
        return s;
    }
    if (s[0] == s[1])
    {
        return removeConsecutiveDuplicates(s.substr(1));
    }
    else
    {
        string small = removeConsecutiveDuplicates(s.substr(1));
        return s[0] + small;
    }
}
int main()
{
	string s;
	cin>>s;
	cout<<removeConsecutiveDuplicates(s)<<endl;
	return 0;
}
/*
Remove Consecutive Duplicates
Difficulty: EASY
Avg. time to solve
20 min
Success Rate
80%
Problem Statement
Given a string S, remove consecutive duplicates from it recursively.
Input Format :
String S
Output Format :
Output string
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string
Sample Input 1 :
aabccba
Sample Output 1 :
abcba
Sample Input 2 :
xxxyyyzwwzzz
Sample Output 2 :
xyzwz

*/
