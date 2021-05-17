class Solution {
    public int minPatches(int[] nums, int n) {
        if(nums == null){
            return 0;
        }
        int ans = 0;
        long sum = 0;
        int i = 0;
        while(i < nums.length && sum < n){
            while(i < nums.length && sum >= nums[i]-1 && sum < n){
                sum += nums[i++];
            }
            while(i < nums.length && sum < nums[i]-1 && sum < n){
                sum += (sum + 1);
                ans++;
            }
        }
        while(sum < n){
            sum += (sum + 1);
            ans++;
        }
        return ans;
    }
}