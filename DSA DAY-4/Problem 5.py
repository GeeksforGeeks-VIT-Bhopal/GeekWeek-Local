class Solution:
    def addDigits(self, num: int) -> int:
        num = str(num)
        def sumdig(n):
            ans = sum(list(map(int,n)))
            return ans
        while len(num)!=1:
            num = str(sumdig(num))
        return int(num)
