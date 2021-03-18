class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:

        ans = []
        nums.sort()

        length = len(nums)

        for i in range(length - 2):
            if (i > 0 and nums[i] == nums[i - 1]):
                continue
            l = i + 1;
            r = length - 1

            while (l < r):
                total = nums[i] + nums[l] + nums[r];
                if (total < 0):
                    l = l + 1
                elif total > 0:
                    r = r - 1
                else:
                    ans.append([nums[i], nums[l], nums[r]])
                    while l < r and nums[l] == nums[l + 1]:
                        l = l + 1
                    while l < r and nums[r] == nums[r - 1]:
                        r = r - 1
                    l = l + 1
                    r = r - 1
        return ans
