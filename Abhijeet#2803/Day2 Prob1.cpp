#include<bits/stdc++.h>
using namespace std;
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
}
int main()
{
	long long int n;
	cin>>n;
	vector<int>soln;
soln = generateString(n);
	for(int i=0;i<soln.size();i++)
	cout<<soln[i]<<" ";
	cout<<endl;
	return 0;
}


/*
Binary strings with no consecutive 1s.
Difficulty: MEDIUM
Avg. time to solve
25 min
Success Rate
65%
Problem Statement
Given an integer K, generate all binary strings of length K such that there are no consecutive 1s in the string. Which means that the binary string should not contain any instance of 1’s coming one after another. A binary string is that string which contains only ‘0’ and ‘1’.
For ‘K=3’, hence the length of the binary string would be 3. We can have the following binary strings with no consecutive 1s:
000 001 010 100 101
Note
1. Each string must be a binary string.
2. There should be no consecutive ‘1’ in the string.
3. Just return an array/sequence of all the strings in an array in a lexicographically increasing order, you don’t need to print anything.
Input Format:
The first line of input contains ‘T’ the number of test cases.

The first and only line of each test case contains a single integer K denoting the length of the binary string to be generated.
Output Format
Return an array of all possible binary strings without consecutive ‘1’ of the length K. 
Constraints:
1 <= T <= 10
0 <= K <= 22

Where ‘T’ is the number of test cases
Where ‘K’ is the length of the binary string. 

Time limit: 1 second
Sample Input 1:
2
4
3
Sample Output 1:
0000 0001 0010 0100 0101 1000 1001 1010 
000 001 010 100 101 
Explanation Of Sample Input 1:
Test case 1:

Similarly, for K=4 we get the following Strings:

0000 0001 0010 0100 0101 1000 1001 1010 

Note that none of the strings has consecutive 1s. Also, note that they are in a lexicographically increasing order.

Test case 2:

We can see that for K=3 we get the following Strings:

000, 001, 010, 100, 101

Note that none of the strings has consecutive 1s. Also, note that they are in a lexicographically increasing order.
Sample Input 2:
2
2
5
Sample Output 2:
00 01 10
00000 00001 00010 00100 00101 01000 01001 01010 10000 10001 10010 10100 10101 */
