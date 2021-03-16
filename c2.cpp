int getMinimumAnagramDifference(string &str1, string &str2)
{
    int i = 0, j = 0, m = 0, n = str1.size();
    for (; i < n; i++)
    {
        for (; j < n; j++)
        {
            if (str1[i] == str2[j])
            {
                str2[j] = '#';
                break;
            }
        }

        if (j == n)
        {
            m++;
        }
    }
    return m;
}