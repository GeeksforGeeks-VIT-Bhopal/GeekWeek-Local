#hard-level

class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        nums.sort()
        if not nums or nums[-1] < 0:
            return 1
        else:
            for i in range(1,nums[-1]+2):
                if i not in nums:
                    return i

#https://leetcode.com/problems/first-missing-positive/submissions/
