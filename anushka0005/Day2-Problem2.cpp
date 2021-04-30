/*
    Time complexity: O(X * log(X) + M)
    Space complexity: O(X + M)

    Where ‘X’ is the total number of distinct elements present in all ‘N’ ranges 
    and ‘M’ is the number of queries. 

*/
#include <unordered_set>
#include <algorithm>

vector<int> kthSmallest(vector<vector<int>> &ranges, vector<int> &queries)
{
    vector<int> sequence;
    unordered_set<int> hashMap;

    // Find all distinct integers present in ranges and insert them in list sequence.
    for(int i = 0; i < ranges.size(); i++) 
    {
        for(int j = ranges[i][0]; j <= ranges[i][1]; j++) 
        {
            if(hashMap.count(j) == 0) 
            {
                sequence.push_back(j);
                hashMap.insert(j);
            }
        }
    }

    // Sort the 'sequence' in ascending order.
    sort(sequence.begin(), sequence.end());
    vector<int> result(queries.size());

    // Finding answer of each query.
    for(int i = 0; i < queries.size(); i++) 
    {
        if(queries[i] > sequence.size())
        {
            result[i] = -1;
        }
        else 
        {
            result[i] = sequence[queries[i]-1];
        }
    }

    return result;
}
