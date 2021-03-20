[17:12, 18/03/2021] Isha PM: def updateMatrix(self, matrix):
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
[17:12, 18/03/2021] Isha PM: *Given an array of n integers nums, a 132 pattern is a subsequence of three integers nums[i], nums[j] and nums[k] such that i < j < k and nums[i] < nums[k] < nums[j].

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
