class Solution:
    def longestPalindrome(self, s: str) -> str:
        for x in reversed(range(1,len(s)+1)):
            for y in range((len(s)+1)-x):
                g=s[y:x+y]
                if g[0]!=g[-1]:pass
                elif g==g[::-1]:return g
