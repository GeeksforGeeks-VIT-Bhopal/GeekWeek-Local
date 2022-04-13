int minCostToGivenString(string str1, string str2)
{
    int freq[52]={0};
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] >= 'a' && str1[i] <= 'z')
        {
            freq[str1[i] - 'a']++;
        }
        else
        {
            freq[str1[i] - 'A' + 26]++;
        }
    }

    for (int i = 0; i < str2.size(); i++)
    {
        if (str2[i] >= 'a' && str2[i] <= 'z')
        {
            freq[str2[i] - 'a']--;
        }
        else
        {
            freq[str2[i] - 'A' + 26]--;
        }
    }

    for (int i = 0; i < 52; i++)
    {
        if (freq[i]) 
        {
            return -1;
        }
    }

    int i = 0, j = 0, ans = 0;
    // i points to str1 and j points to str2
    while (i < str1.size() && j < str2.size())
    {
        if (str1[i] == str2[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
            ans++;
        }
    }

    return ans;
}
