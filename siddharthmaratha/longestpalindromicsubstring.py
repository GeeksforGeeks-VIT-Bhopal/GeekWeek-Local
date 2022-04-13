class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        ans = s
        rev = ans[::-1]
        num = len(ans)
        if ans==rev:
            return ans
        else:
            while num:
                num = num-1
                for i in range(len(s)-num+1):
                    ans = s[i:i+num]
                    rev = ans[::-1]
                    if ans==rev:
                        return ans
