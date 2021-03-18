class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        def helper(s, m, d):
            if len(s) == 2*n:
                res.append(s) 
                return 
            
            if d > m:
                return 
            if m == d:
                helper(s+'(', m+1, d)
            elif m == n:
                helper(s+')', m, d+1)
            else:
                helper(s+'(', m+1, d) 
                helper(s+')', m, d+1) 
        
        helper('', 0, 0)
        return res
