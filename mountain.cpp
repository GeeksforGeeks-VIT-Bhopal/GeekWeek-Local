class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int maxl = 0, i = 1;
        
        while(i < arr.size()) {
            
            int peak = 0, valley = 0;
            while(i < arr.size() && arr[i] > arr[i - 1]) peak++, i++;
            while(i < arr.size() && arr[i] < arr[i - 1]) valley++, i++;
            if(peak > 0 && valley > 0) maxl = max(maxl, peak + valley + 1);
            else if(!peak && !valley) i++;
        }
        return maxl;
    }
};
