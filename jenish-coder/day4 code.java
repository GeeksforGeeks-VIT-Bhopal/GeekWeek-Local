public class ThreeSumClosest {

    public int threeSumClosest(int[] nums, int target) {
        // Sort the array
        Arrays.sort(nums);
        // Length of the array
        int n = nums.length;
        // Result
        int closest = nums[0] + nums[1] + nums[n - 1];
        // Loop for each element of the array
        for (int i = 0; i < n - 2; i++) {
            // Left and right pointers
            int j = i + 1;
            int k = n - 1;
            // Loop for all other pairs
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum <= target) {
                    j++;
                } else {
                    k--;
                }
                if (Math.abs(closest - target) > Math.abs(sum - target)) {
                    closest = sum;
                }
            }
        }
        return closest;
    }
}
