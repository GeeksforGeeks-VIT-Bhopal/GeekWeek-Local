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