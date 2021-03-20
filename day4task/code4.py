class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1 or numRows >= len(s):
            return s
        
        charArray = [[] for _ in range(numRows)]
        row = 0
        direction = -1
        
        for c in s:
            charArray[row].append(c)
            if row ==0 or row == numRows - 1:
                direction *= -1
            
            row += direction
            
        result = ''
        for arr in charArray:
            result += ''.join(arr)
            
        return result
