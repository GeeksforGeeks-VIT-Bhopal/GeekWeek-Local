class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        //Time complexity: O(n) space complexity: O(1)
        
        vector<vector<int>> res;
        int i = 0, n = intervals.size();
        
        //handle interval[i] < newInterval
        while(i < n && intervals[i][1] < newInterval[0]) {
            res.push_back(intervals[i]);
            i++;
        }
        
        //handle interval[i] not is neither > nor < newInterval
        while(i < n && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(intervals[i][0], newInterval[0]);
            newInterval[1] = max(intervals[i][1], newInterval[1]);
            i++;
        }
        res.push_back(newInterval);
        
        
        //handle interval[i] > newInterval
        while(i < n) {
           res.push_back(intervals[i]);
           i++;
        }
        
        return res;
    }
}
