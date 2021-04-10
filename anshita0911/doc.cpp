/*

	Time complexity: O(N^2) 
	Space complexity: O(1)
	
	where ‘N’ is the length of the given string ‘s’.


*/

bool checkUnique(string &s)
{
    //  Iterate through the given string 's'.
    for (int i = 0; i < s.length(); i++)
    {
        //  Again, Iterate through the given string.
        for (int j = i + 1; j < s.length(); j++)
        {
            //  If, found same character at different indexed then return false.
            if (s[i] == s[j])
            {
                return false;
            }
        }
    }

    return true;
}







/*
    Time Complexity: O(N*M). 
    Space Complexity: O(N*M).
    
    Where N is the length of the string a and M is the length of string b.
*/

#include <vector>
#include <string>

bool isInterleave(string a, string b, string c)
{

	int n1 = a.length(), n2 = b.length(), n3 = c.length();

	//Create a dp array of size (n1+1)*(n2+1) and initialise it to false.
	vector<vector<bool>> dp(n1 + 1, vector<bool>(n2 + 1, false));

	//If the length of c is not equal to the sum of the length of a and b, then return false.
	if (n1 + n2 != n3)
	{
		return false;
	}
	int i, j;

	for (i = 0; i <= n1; i++)
	{
		for (j = 0; j <= n2; j++)
		{

			//If both i and j are 0, then simply asnwer is true.
			if (i == 0 && j == 0)
			{
				dp[i][j] = true;
			}

			//If the value of…







/*
    Time Complexity : O(N^3)
    Space complexity : O(1)

    where N is the size of the input string
*/

bool isPalindrome(string &str, int start, int end)
{
    while (start < end)
    {
        if(str[start] != str[end])
        {
            return false;
        }

        ++start;
        --end;
    }

    return true;
}

int palindromicSubstrings(string str)
{
    int n = str.length();
    int ans = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            if(isPalindrome(str, i, j))
            {
                ++ans;
            }
        }
    }

    return ans;
}

