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

			//If the value of i is zero, then dp[i][j] becomes true, if dp[i][j-1] is true and the (j-1) character of b matches with (j-1) character of c.
			else if (i == 0)
			{
				dp[i][j] = dp[i][j - 1] && (b[j - 1] == c[j - 1]);
			}

			//If j is 0, then dp[i][j] becomes true, if dp[i-1][j] is true and the (i-1) character of a matches with (j-1) character of c.
			else if (j == 0)
			{
				dp[i][j] = dp[i - 1][j] && (a[i - 1] == c[i - 1]);
			}

			//Check for both the cases.
			else
			{
				dp[i][j] = (dp[i - 1][j] && a[i - 1] == c[i + j - 1]) || (dp[i][j - 1] && b[j - 1] == c[i + j - 1]);
			}
		}
	}

	return dp[n1][n2];
}