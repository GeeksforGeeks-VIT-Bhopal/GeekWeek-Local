
class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:

        def twosum_helper(target, results, nums, left, right, num):                
            while left < right:
                if nums[left] + nums[right] < target:
                    left += 1                    
                elif nums[left] + nums[right] > target:
                    right -= 1
                else:
                    triplet = [num, nums[left], nums[right]]
                    if triplet not in results:
                        results.append(triplet)
                    left += 1
                            
        results = []
        if len(nums) < 3:
            return results

        nums = sorted(nums)
                
        for i, num in enumerate(nums):
            target = -num
            twosum_helper(target, results, nums, i + 1, len(nums) - 1, num)
                        
        return results