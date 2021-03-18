class Solution {
public:
    bool dfs(vector<int> &nums,int index,int side,int s1,int s2,int s3,int s4)
    {
        if(index==nums.size())
            return s1==side && s2==side && s3==side;
        if(s1+nums[index]<=side && dfs(nums,index+1,side,s1+nums[index],s2,s3,s4))
            return true;
        if(s2+nums[index]<=side && s2!=s1 && dfs(nums,index+1,side,s1,s2+nums[index],s3,s4))
            return true;
        if(s3+nums[index]<=side && s3!=s2 && s3!=s1 && dfs(nums,index+1,side,s1,s2,s3+nums[index],s4))
            return true;
        if(s4+nums[index]<=side && s4!=s3 && s4!=s2 && s4!=s1 && dfs(nums,index+1,side,s1,s2,s3,s4+nums[index]))
            return true;
        return false;
    }
    bool makesquare(vector<int>& nums) {
        int n=nums.size();
        if(n<4) return false;
        int perimeter=accumulate(nums.begin(),nums.end(),0);
        int side=perimeter/4;
        if(side*4!=perimeter) return false;
        sort(nums.rbegin(),nums.rend());
        return dfs(nums,0,side,0,0,0,0);
    }
};