#include <climits>

int helper(vector<int> &height, vector<int> &width, int n, int &maxHeight, int &maxWidth) 
{
    int maxEnvelopes = 0;
    for(int i = 0; i < n; i++) 
    {
        if(height[i] < maxHeight && width[i] < maxWidth) 
        {
            maxEnvelopes = max(maxEnvelopes, 1 + helper(height, width, n, height[i], width[i]));
        }
    }

    return maxEnvelopes;
}

int findMaxEnvelopes(vector<int> &height, vector<int> &width, int n) 
{
    int maxHeight = INT_MAX, maxWidth = INT_MAX;
    
    return helper(height, width, n, maxHeight, maxWidth);
}
