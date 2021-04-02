// prblm -3 Count distinct substrings
#include <bits/stdc++.h>
#include <unordered_set>
countDistinctSubstrings(string &s)
{
    //    For storing all distinct substrings of the given string.
    unordered_set<string> distinctStrings;

    int n = s.length();

    //    Iterate through the string.
    for (int i = 0; i < n; i++)
    {
        //    Iterate till the end.
        for (int j = i; j < n; j++)
        {
            //    Current substring
            string temp = s.substr(i, j - i + 1);

            //    Insert the current substring into the HashSet.
            distinctStrings.insert(temp);
        }
    }

    //    Return the total number of distinct substrings.
    return (distinctStrings.size() + 1);
}