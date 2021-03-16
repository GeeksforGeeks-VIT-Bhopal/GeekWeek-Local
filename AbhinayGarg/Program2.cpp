int distinctStrings(vector<string> &arr, int n)
{
    //  Counter variable to store the number of distinct strings.
    int count = 0;

    //  Iterate through the given set.
    for (int i = 0; i < n; i = i + 1)
    {
        //  Create two vectors to store frequencies of characters at even or odd indexes.
        vector<int> even1(26, 0), odd1(26, 0);

        //  Iterate through the string.
        for (int j = 0; j < arr[i].length(); j = j + 1)
        {
            //  For odd index, increment frequency in odd1 vector.
            if (j & 1)
            {
                odd1[arr[i][j] - 'a'] = odd1[arr[i][j] - 'a'] + 1;
            }

            //  For even index, increment frequency in even1 vector.
            else
            {
                even1[arr[i][j] - 'a'] = even1[arr[i][j] - 'a'] + 1;
            }
        }

        int h;

        //  Again, increment through the set.
        for (h = i + 1; h < n; h = h + 1)
        {
            //  Create two vectors to store frequencies of characters at even or odd indexes.
            vector<int> even2(26, 0), odd2(26, 0);

            for (int j = 0; j < arr[h].length(); j = j + 1)
            {
                if (j & 1)
                {
                    odd2[arr[h][j] - 'a'] = odd2[arr[h][j] - 'a'] + 1;
                }
                else
                {
                    even2[arr[h][j] - 'a'] = even2[arr[h][j] - 'a'] + 1;
                }
            }

            int k;

            //  Check, If both vectors are equal or not.
            for (k = 0; k < 26; k = k + 1)
            {
                if (even1[k] != even2[k] || odd1[k] != odd2[k])
                {
                    break;
                }
            }

            if (k == 26)
            {
                break;
            }
        }

        //  Increment counter if string at 'i' is not equivalent to any other string.
        if (h == n)
        {
            count = count + 1;
        }
    }

    return count;
}
