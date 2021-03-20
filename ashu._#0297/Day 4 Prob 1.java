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
