class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        ans = [-1,-1]
        for i in range(len(nums)):
            if nums[i]==target:
                ans[0] = i
                break
        for i in range(-1,-len(nums)-1,-1):
            if nums[i]==target:
                ans[1]=i+len(nums)
                break
        return ans
            
