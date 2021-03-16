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
            //  For odd index, increm
