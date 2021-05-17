class Solution {
public:
    vector<int> beautifulArray(int N) {
        
        if (N == 1)
        {
            return {1};
        }
        
        int evens = N / 2, odds = (N + 1) / 2;
        vector<int> left = beautifulArray(evens);
        vector<int> right = beautifulArray(odds);
        
        for (int i = 0; i < left.size(); ++i)
        {
            left[i] *= 2;
        }
        
        for (int i = 0; i < right.size(); ++i)
        {
            right[i] = right[i] * 2 - 1;
        }
        
        left.insert(left.end(), right.begin(), right.end());
        return left;
    }
};