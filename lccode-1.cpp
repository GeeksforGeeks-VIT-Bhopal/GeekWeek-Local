class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> cache;
        vector<int> answer;

        for (size_t i = 0; i < nums.size(); ++i)
        {
            int needed_num = target - nums[i];

            if (cache.find(needed_num) != cache.end())
            {
                // We found it
                answer.push_back(cache[needed_num]);
                answer.push_back(i);
                return answer;
            }
            else
            {
                // Didn't find it
                cache.insert(make_pair(nums[i], i));
            }
        }
        return answer;
    }
};
