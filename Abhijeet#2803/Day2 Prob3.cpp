#include <bits/stdc++.h>
using namespace std;

void checkPangram(string s, int n)
{
    int answer = 0;
    int freq[255];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; i++)
    {
        freq[s[i]]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq['a' + i] > 0 || freq['A' + i] > 0)
        {
            answer++;
        }
    }

    cout << (answer == 26 ? "YES" : "NO") << endl;

    return;
}

int main()
{
	string s;
	long long int n;
	cin>>s;
	cin>>n;
	checkPangram(s,n);
	return 0;
}
/*

Check Pangram
Difficulty: EASY
Avg. time to solve
15 min
Success Rate
80%
Problem Statement
A word or a sentence is called a pangram if it contains all the letters of the English alphabet.
You are given a string s consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. Print "YES" or "NO".
We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in either uppercase or in lowercase.
Input Format :
Line 1 : n (Number of characters in the string)
Line 2 : Input string s
Output Format :
YES or NO
Constraints :
1 <= n <= 10^6
Sample Input 1 :
12
toosmallword
Sample Output 1 :
NO
Sample Input 2 :
35
TheQuickBrownFoxJumpsOverTheLazyDog
Sample Output 2 :
YES

*/
