class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if matrix == None or matrix == []:
            return matrix
        else:
            m = len(matrix)
            n = len(matrix[0])
            k = 0
            l = 0
            s = []

            while k < m and l < n:
                for i in range(l, n):
                    s.append(matrix[k][i])
                k += 1

                for i in range(k, m):
                    s.append(matrix[i][n-1])
                n-= 1

                if k < m:
                    for i in range(n-1, l-1, -1):
                        s.append(matrix[m-1][i])
                    m -= 1

                if l < n:
                    for i in range(m-1, k-1, -1):
                        s.append(matrix[i][l])
                    l += 1
            return s