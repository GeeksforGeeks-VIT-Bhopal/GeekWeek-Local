 class Solution:
    def updateMatrix(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: List[List[int]]
        """

        # approach: dynamic programming to scan matrix twice from left-top and right-bottom

        m = len(matrix)
        n = len(matrix[0]) # it's promised there will be at least one zero

        # scan from left-top
        for i, row in enumerate(matrix):
            for j, ele in enumerate(row):
                if ele:
                    top = matrix[i - 1][j] + 1 if i > 0 else float('inf')
                    left = matrix[i][j - 1] + 1 if j > 0 else float('inf')
                    matrix[i][j] = min(top, left)

        # scan from right-bottom
        for i in range(m - 1, -1, -1):
            for j in range(n - 1, -1, -1):
                ele = matrix[i][j]
                if ele:
                    bottom = matrix[i + 1][j] + 1 if i < m - 1 else float('inf')
                    right = matrix[i][j + 1] + 1 if j < n - 1 else float('inf')
                    matrix[i][j] = min(ele, bottom, right)

        return matrix
[2:21 PM, 3/18/2021] KashishKhaneja@VIT: Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Notice that the solution set must not contain duplicate triplets.

 

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        
        ans=[]
        nums.sort()
        
        length=len(nums)
        
        for i in range(length-2):
            if (i>0 and nums[i]==nums[i-1]):
                continue
            l=i+1;
            r=length-1
            
            while(l<r):
                total=nums[i]+nums[l]+nums[r];
                if(total<0):
                    l=l+1
                elif total>0:
                    r=r-1
                else:
                    ans.append([nums[i],nums[l],nums[r]])
                    while l<r and nums[l]==nums[l+1]:
                        l=l+1
                    while l<r and nums[r]==nums[r-1]:
                        r=r-1
                    l=l+1
                    r=r-1
        return ans
[2:21 PM, 3/18/2021] KashishKhaneja@VIT: *Given an array of n integers nums, a 132 pattern is a subsequence of three integers nums[i], nums[j] and nums[k] such that i < j < k and nums[i] < nums[k] < nums[j].

Return true if there is a 132 pattern in nums, otherwise, return false.*

class Solution {
    public boolean find132pattern (int[] nums) {
        Stack <Integer> stack = new Stack ();
        int second = Integer.MIN_VALUE;
        for (int i = nums.length - 1; i >= 0; i--) {
            if (nums [i] < second)
                return true;
            while (!stack.isEmpty() && nums [i] > stack.peek ())
                second = stack.pop ();
            stack.push (nums [i]);
        }
        return false;
    }
}